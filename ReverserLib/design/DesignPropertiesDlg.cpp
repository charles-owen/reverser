/**
 * @file DesignProperitesDlg.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include <wx/xrc/xmlres.h>

#include "DesignPropertiesDlg.h"

#include "Design.h"
#include "../schematic/Schematic.h"
#include "../board/Board.h"


DesignPropertiesDlg::DesignPropertiesDlg(wxWindow* parent, Design* design) : mDesign(design)
{
    wxXmlResource::Get()->LoadDialog(this, parent, L"DesignPropertiesDlg");

    mSchematic = mDesign->GetSchematic();
    mBoard = mDesign->GetBoard();

    UpdateUI();

    Bind(wxEVT_BUTTON, &DesignPropertiesDlg::OnOK, this, wxID_OK);
    Bind(wxEVT_BUTTON, &DesignPropertiesDlg::OnSchematicFile, this, XRCID("schematic_file_select"));
    Bind(wxEVT_BUTTON, &DesignPropertiesDlg::OnBoardFile, this, XRCID("board_file_select"));
}

void DesignPropertiesDlg::UpdateUI()
{
    auto schematicFilenameCtrl = XRCCTRL(*this, "schematic_file_name", wxTextCtrl);
    auto filename = mSchematic->GetRelativePath(mDesign->GetFilePath().ToStdWstring());
    schematicFilenameCtrl->SetValue(filename != L"" ? filename : L"<none>");

    auto boardFilenameCtrl = XRCCTRL(*this, "board_file_name", wxTextCtrl);
    filename = mBoard->GetRelativePath(mDesign->GetFilePath().ToStdWstring());
    boardFilenameCtrl->SetValue(filename != L"" ? filename : L"<none>");
}

void DesignPropertiesDlg::OnOK(wxCommandEvent& event)
{
    mDesign->SetSchematic(mSchematic);
    mDesign->SetBoard(mBoard);
    EndModal(wxID_OK);
}

void DesignPropertiesDlg::OnSchematicFile(wxCommandEvent& event)
{
    wxFileDialog
            openFileDialog(this, _("Open Eagle Schematic file"), "", "",
            "SCH files (*.sch)|*.sch", wxFD_OPEN | wxFD_FILE_MUST_EXIST);
    if (openFileDialog.ShowModal() == wxID_CANCEL)
    {
        return;
    }

    auto path = openFileDialog.GetPath();
    auto schematic = std::make_shared<Schematic>();
    if(schematic->EagleLoad(path.ToStdWstring()))
    {
        mSchematic = schematic;
        auto schematicFilenameCtrl = XRCCTRL(*this, "schematic_file_name", wxTextCtrl);
        UpdateUI();
    }
    else
    {
        wxMessageBox(L"Unable to load schematic file", "Schematic EagleLoad Failure", wxCENTRE, this);
    }
}

void DesignPropertiesDlg::OnBoardFile(wxCommandEvent& event)
{
    wxFileDialog
            openFileDialog(this, _("Open Eagle Board file"), "", "",
            "BRD files (*.brd)|*.brd", wxFD_OPEN | wxFD_FILE_MUST_EXIST);
    if (openFileDialog.ShowModal() == wxID_CANCEL)
    {
        return;
    }

    auto path = openFileDialog.GetPath();
    auto board = std::make_shared<Board>();
    if(board->EagleLoad(path.ToStdWstring()))
    {
        mBoard = board;
        auto schematicFilenameCtrl = XRCCTRL(*this, "board_file_name", wxTextCtrl);
        UpdateUI();
    }
    else
    {
        wxMessageBox(L"Unable to load board file", "Board EagleLoad Failure", wxCENTRE, this);
    }
}
