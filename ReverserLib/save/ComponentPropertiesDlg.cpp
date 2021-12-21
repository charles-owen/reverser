/**
 * @file ComponentPropertiesDlg.cpp
 * @author Charles B. Owen
 */

#include "pch.h"

#include <wx/xrc/xmlres.h>
#include <wx/valnum.h>

#include "ComponentPropertiesDlg.h"

#include "save/Component.h"
#include "save/Components.h"
#include "save/Attribute.h"
#include "save/Part.h"

using namespace std;


ComponentPropertiesDlg::ComponentPropertiesDlg(
        std::shared_ptr<Components> components,
        std::shared_ptr<Component> component) :
    mComponents(components), mComponent(component)
{
    wxXmlResource::Get()->LoadDialog(this, nullptr, "ComponentPropertiesDlg");
    Bind(wxEVT_BUTTON, &ComponentPropertiesDlg::OnOk, this, XRCID("wxID_OK"));



    auto partDesc = XRCCTRL(*this, "part_desc", wxStaticText);
    partDesc->SetLabel(component->GetPart()->GetDescription());

    mNumCtrl = XRCCTRL(*this, "comp_number", wxTextCtrl);
    mNumCtrl->SetValue(mComponent->GetNumber());

    mValueCtrl = XRCCTRL(*this, "comp_value", wxTextCtrl);
    mValueCtrl->SetValue(mComponent->GetAttribute(L"Value")->GetValue());
}



void ComponentPropertiesDlg::OnOk(wxCommandEvent& event)
{
    // Force to upper case.
    auto number = mNumCtrl->GetValue().MakeUpper();
    mNumCtrl->SetValue(number);
    auto numberW = number.ToStdWstring();

    if(!Component::IsValidNumber(numberW))
    {
        wxMessageBox(L"Invalid component number. Must consider of prefix followed by one or more digits.");

        return;
    }

    // Does it already exist
    auto existing = mComponents->Get(numberW);
    if(existing != nullptr && existing != mComponent)
    {
        auto prefix = Component::GetPrefix(numberW);
        auto next = mComponents->NextFree(prefix);
        mNumCtrl->SetValue(next);
        wxString msg(L"Component number already exists. You might consider: ");
        wxMessageBox(msg + next);

        return;
    }

    if(Validate() && TransferDataFromWindow())
    {
        mComponent->SetNumber(numberW);
        mComponent->GetAttribute(L"Value")->SetValue(mValueCtrl->GetValue().ToStdWstring());

        EndModal(wxID_OK);
    }
}
