#include "pch.h"

#include <wx/xrc/xmlres.h>              // XRC XML resources
#include <wx/notebook.h>
#include <wx/stdpaths.h>

#include "MainFrame.h"
#include "design/Design.h"
#include "pcb/PCBPanel.h"
#include "pcb/PCBView.h"
#include "ReverserConst.h"


/// Directory within resources that contains the images.
const std::wstring ImagesDirectory = L"/images";

/**
 * Constructor
 */
MainFrame::MainFrame()
        : mReverser(this), mConfig(L"Reverser")
{
    auto standardPaths = wxStandardPaths::Get();
    auto resourcesDir = standardPaths.GetResourcesDir().ToStdWstring();
    auto imagesDir = resourcesDir + ImagesDirectory;

    wxXmlResource::Get()->LoadFrame(this, nullptr, wxT("MainFrame"));

    // Recently used files
    mHistory.Load(mConfig);
    auto fileMenu = GetMenuBar()->GetMenu(0);
    mHistory.UseMenu(fileMenu);
    mHistory.AddFilesToMenu();

    auto sizer = new wxBoxSizer(wxHORIZONTAL);

    auto pcbPanel = new PCBPanel(this, &mReverser, resourcesDir);
    sizer->Add(pcbPanel, 1, wxEXPAND | wxALL);

    SetSizer( sizer );
    Layout();


//    // The tabbed notebook
//    mNotebook = XRCCTRL(*this, "notebook", wxNotebook);;
//
//    auto pcbPanel = new PCBPanel(this, GetReverser(), mNotebook);
//    mNotebook->AddPage(pcbPanel, "PCB", true);
//    mPCBPanel = pcbPanel;
//
//    auto schematicPanel = new SchematicPanel(this, mNotebook);
//    mNotebook->AddPage(schematicPanel, "Schematic");
//    mSchematicPanel = schematicPanel;
//
//    // Bind the menu options
    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnFileSaveAs, this, wxID_SAVEAS);
    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnFileSave, this, wxID_SAVE);
    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnFileOpen, this, wxID_OPEN);
    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnExit, this, wxID_EXIT);
    Bind(wxEVT_MENU, &MainFrame::OnMRUFile, this, wxID_FILE1, wxID_FILE9);
//    Bind(wxEVT_NOTEBOOK_PAGE_CHANGED, &MainFrame::OnNotebookPageChanged, this, XRCID("notebook"));
//
//    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnComponentsDelete, this, XRCID("components_delete"));
//    Bind(wxEVT_UPDATE_UI, &MainFrame::OnComponentsDeleteUpdate, this, XRCID("components_delete"));
//    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnComponentsEdit, this, XRCID("components_edit"));
//    Bind(wxEVT_UPDATE_UI, &MainFrame::OnComponentsEditUpdate, this, XRCID("components_edit"));
//
//    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnNetworksNewNetwork, this, XRCID("networks_new"));
//
//    mPCBPanel->GetView()->SetFocus();

    Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnDesignProperties, this, XRCID("design_properties"));
}

/**
 *
 * @param event
 */
void MainFrame::OnDesignProperties(wxCommandEvent& event)
{
    mReverser.GetDesign()->PropertiesDlg(this);
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
    auto design = mReverser.GetDesign();
    auto filename = design->GetFilename();
    if(filename.IsEmpty())
    {
        OnFileSaveAs(event);
        return;
    }

    auto filePath = design->GetFilePath();
    mReverser.FileSave(this, filePath);
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

    mReverser.FileSave(this, saveFileDialog.GetPath());
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

    mReverser.FileOpen(this, openFileDialog.GetPath());
    UpdateTitle();
}

void MainFrame::FileOpen(const std::wstring& path)
{
    mReverser.FileOpen(this, path);
}

void MainFrame::UpdateTitle()
{
    SetLabel(mReverser.GetDesign()->GetFilename() + L" - Reverser");
    mHistory.AddFileToHistory(mReverser.GetDesign()->GetFilePath());
    mHistory.Save(mConfig);
}



void MainFrame::OnMRUFile(wxCommandEvent& event)
{
    wxString f(mHistory.GetHistoryFile(event.GetId() - wxID_FILE1));
    if (!f.empty())
    {
        if(mReverser.GetDesign()->Load(this, f))
        {
            UpdateTitle();
        }
    }
}

//void MainFrame::OnComponentsDelete(wxCommandEvent& event)
//{
//    if(mNotebook->GetSelection() == 0)
//    {
//        mPCBPanel->OnComponentsDelete(event);
//    }
//}
//
//void MainFrame::OnComponentsDeleteUpdate(wxUpdateUIEvent& event)
//{
//    if(mNotebook->GetSelection() == 0)
//    {
//        mPCBPanel->OnComponentsDeleteUpdate(event);
//    }
//}
//
//void MainFrame::OnComponentsEdit(wxCommandEvent& event)
//{
//    if(mNotebook->GetSelection() == 0)
//    {
//        mPCBPanel->OnComponentsEdit(event);
//    }
//}
//
//void MainFrame::OnComponentsEditUpdate(wxUpdateUIEvent& event)
//{
//    if(mNotebook->GetSelection() == 0)
//    {
//        mPCBPanel->OnComponentsEditUpdate(event);
//    }
//}
//
//void MainFrame::OnNetworksNewNetwork(wxCommandEvent& event)
//{
//    if(mNotebook->GetSelection() == 0)
//    {
//        mPCBPanel->OnNetworksNewNetwork(event);
//    }
//}


