#include "pch.h"

#include <wx/xrc/xmlres.h>              // XRC XML resources
#include <wx/notebook.h>


#include "MainFrame.h"
#include "Model.h"
#include "pcb/PCBPanel.h"
#include "pcb/PCBView.h"
#include "ReverserConst.h"

#include "schematic/SchematicPanel.h"


/**
 * Constructor
 */
MainFrame::MainFrame()
        : mReverser(this), mConfig(L"Reverser")
{
    mReverser.Load(ReverserConst::LibDir);

    wxXmlResource::Get()->LoadFrame(this, nullptr, wxT("MainFrame"));

    // Recently used files
    mHistory.Load(mConfig);
    auto fileMenu = GetMenuBar()->GetMenu(0);
    mHistory.UseMenu(fileMenu);
    mHistory.AddFilesToMenu();

    // The tabbed notebook
    mNotebook = XRCCTRL(*this, "notebook", wxNotebook);;

    auto pcbPanel = new PCBPanel(this, GetReverser(), mNotebook);
    mNotebook->AddPage(pcbPanel, "PCB", true);
    mPCBPanel = pcbPanel;

    auto schematicPanel = new SchematicPanel(this, mNotebook);
    mNotebook->AddPage(schematicPanel, "Schematic");
    mSchematicPanel = schematicPanel;

    // Bind the menu options
    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnFileSaveAs, this, XRCID("file_save_as"));
    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnFileSave, this, XRCID("file_save"));
    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnFileOpen, this, XRCID("file_open"));
    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnExit, this, XRCID("file_exit"));
    Bind(wxEVT_MENU, &MainFrame::OnMRUFile, this, wxID_FILE1, wxID_FILE9);
    Bind(wxEVT_NOTEBOOK_PAGE_CHANGED, &MainFrame::OnNotebookPageChanged, this, XRCID("notebook"));

    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnComponentsDelete, this, XRCID("components_delete"));
    Bind(wxEVT_UPDATE_UI, &MainFrame::OnComponentsDeleteUpdate, this, XRCID("components_delete"));
    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnComponentsEdit, this, XRCID("components_edit"));
    Bind(wxEVT_UPDATE_UI, &MainFrame::OnComponentsEditUpdate, this, XRCID("components_edit"));

    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnNetworksNewNetwork, this, XRCID("networks_new"));

    mPCBPanel->GetView()->SetFocus();

}

MainFrame::~MainFrame()
{
    delete mSchematicMenu;
    delete mPCBMenu;
}

/**
 * Exit menu option handlers
 * @param event
 */
void MainFrame::OnExit(wxCommandEvent& event)
{
  Close(true);
}


void MainFrame::OnFileSave(wxCommandEvent &event)
{
    auto filename = mReverser.GetModel()->GetFilename();
    if(filename.IsEmpty())
    {
        OnFileSaveAs(event);
        return;
    }

    auto filePath = mReverser.GetModel()->GetFilePath();
    mReverser.GetModel()->Save(filePath);
    UpdateTitle();
}

void MainFrame::OnFileSaveAs(wxCommandEvent& event)
{
    wxFileDialog saveFileDialog(this, _("Save Reverser file"), "", "",
            "RVRS (*.rvrs)|*.rvrs", wxFD_SAVE|wxFD_OVERWRITE_PROMPT);
    if (saveFileDialog.ShowModal() == wxID_CANCEL)
    {
        return;
    }

    mReverser.GetModel()->Save(saveFileDialog.GetPath());
    UpdateTitle();
}

void MainFrame::OnFileOpen(wxCommandEvent& event)
{
    wxFileDialog
            openFileDialog(this, _("Open Reverser file"), "", "",
            "RVRS files (*.rvrs)|*.rvrs", wxFD_OPEN | wxFD_FILE_MUST_EXIST);
    if (openFileDialog.ShowModal() == wxID_CANCEL)
    {
        return;
    }

    mReverser.GetModel()->Load(openFileDialog.GetPath());
    UpdateTitle();
}

void MainFrame::UpdateTitle()
{
    SetLabel(mReverser.GetModel()->GetFilename() + L" - Reverser");
    mHistory.AddFileToHistory(mReverser.GetModel()->GetFilePath());
    mHistory.Save(mConfig);
}

void MainFrame::OnNotebookPageChanged(wxBookCtrlEvent& event)
{
    auto menubar = GetMenuBar();

    int selection = event.GetSelection();
    if(selection == 0)
    {
        // We are displaying the PCB, so ensure that menu is there
        // and remove the Schematic menu if necessary
        if(mSchematicMenu == nullptr)
        {
            auto item = menubar->FindItem(XRCID("schematic_properties"), &mSchematicMenu);
            auto index = menubar->FindMenu(mSchematicMenu->GetTitle());
            menubar->Remove(index);
        }

        // Ensure the PCB menu is there if it was removed
        if(mPCBMenu != nullptr)
        {
            menubar->Insert(2, mPCBMenu, "&PCB");
            mPCBMenu = nullptr;
        }

        mPCBPanel->GetView()->SetFocus();
    }
    else
    {
        if(mPCBMenu == nullptr)
        {
            auto item = menubar->FindItem(XRCID("pcb_properties"), &mPCBMenu);
            auto index = menubar->FindMenu(mPCBMenu->GetTitle());
            menubar->Remove(index);
        }

        if(mSchematicMenu != nullptr)
        {
            menubar->Insert(2, mSchematicMenu, "&Schematic");
            mSchematicMenu = nullptr;
        }
    }
}


void MainFrame::OnMRUFile(wxCommandEvent& event)
{
    wxString f(mHistory.GetHistoryFile(event.GetId() - wxID_FILE1));
    if (!f.empty())
    {
        if(mReverser.GetModel()->Load(f))
        {
            UpdateTitle();
        }
    }
}

void MainFrame::OnComponentsDelete(wxCommandEvent& event)
{
    if(mNotebook->GetSelection() == 0)
    {
        mPCBPanel->OnComponentsDelete(event);
    }
}

void MainFrame::OnComponentsDeleteUpdate(wxUpdateUIEvent& event)
{
    if(mNotebook->GetSelection() == 0)
    {
        mPCBPanel->OnComponentsDeleteUpdate(event);
    }
}

void MainFrame::OnComponentsEdit(wxCommandEvent& event)
{
    if(mNotebook->GetSelection() == 0)
    {
        mPCBPanel->OnComponentsEdit(event);
    }
}

void MainFrame::OnComponentsEditUpdate(wxUpdateUIEvent& event)
{
    if(mNotebook->GetSelection() == 0)
    {
        mPCBPanel->OnComponentsEditUpdate(event);
    }
}

void MainFrame::OnNetworksNewNetwork(wxCommandEvent& event)
{
    if(mNotebook->GetSelection() == 0)
    {
        mPCBPanel->OnNetworksNewNetwork(event);
    }
}


