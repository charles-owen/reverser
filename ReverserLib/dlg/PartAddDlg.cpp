/**
 * @file PartAddDlg.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include <wx/xrc/xmlres.h>

#include "PartAddDlg.h"
#include "../components/Parts.h"
#include "../components/Part.h"

PartAddDlg::PartAddDlg(Parts* parts)
{
    wxXmlResource::Get()->LoadDialog(this, nullptr, "PartSelectDlg");
    Bind(wxEVT_BUTTON, &PartAddDlg::OnOk, this, XRCID("wxID_OK"));

    mListBox = XRCCTRL(*this, "parts_list", wxListBox);

    for(auto part : *parts)
    {
        mParts.push_back(part);
    }

    sort(mParts.begin(), mParts.end(),
            [](const std::shared_ptr<Part> & a, const std::shared_ptr<Part> & b) -> bool
            {
              return a->GetDescription() < b->GetDescription();
            });

    int index = 0;
    for(auto part : mParts)
    {
        wxString comment = part->GetDescription();
        mListBox->InsertItems(1, &comment, index++);
    }
}



const std::shared_ptr<Part>& PartAddDlg::GetPart() const
{
    return mPart;
}


void PartAddDlg::OnOk(wxCommandEvent& event)
{
    auto selection = mListBox->GetSelection();
    if(selection == wxNOT_FOUND)
    {
        wxMessageBox(L"Please select a part to add");
        return;
    }

    mPart = mParts[selection];
    EndModal(wxID_OK);
}