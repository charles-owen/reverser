/**
 * @file PCBPropertiesDlg.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include <wx/xrc/xmlres.h>              // XRC XML resources
#include <wx/valnum.h>

#include "PCBPropertiesDlg.h"
#include "../pcb/PCB.h"
#include "design/Design.h"


PCBPropertiesDlg::PCBPropertiesDlg(std::shared_ptr<PCB> pcb) : mPCB(pcb)
{
    mWidth = pcb->GetWidth();
    mHeight = pcb->GetHeight();

    wxXmlResource::Get()->LoadDialog(this, nullptr, "PCBPropertiesDlg");

    auto widthCtrl = XRCCTRL(*this, "pcb_width", wxTextCtrl);
    wxFloatingPointValidator<double> widthValidator(1, &mWidth);
    widthCtrl->SetValidator(widthValidator);

    auto heightCtrl = XRCCTRL(*this, "pcb_height", wxTextCtrl);
    wxFloatingPointValidator<double> heightValidator(1, &mHeight);
    heightCtrl->SetValidator(heightValidator);

    Bind(wxEVT_BUTTON, &PCBPropertiesDlg::OnOk, this, XRCID("wxID_OK"));
}


void PCBPropertiesDlg::OnOk(wxCommandEvent& event)
{
    if(Validate() && TransferDataFromWindow())
    {
        mPCB->SetWidth(mWidth);
        mPCB->SetHeight(mHeight);
        mPCB->GetModel()->UpdateObservers();

        EndModal(wxID_OK);
    }
}