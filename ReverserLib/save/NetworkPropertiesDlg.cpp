/**
 * @file NetworkPropertiesDlg.cpp
 * @author Charles B. Owen
 */

#include "pch.h"

#include <wx/xrc/xmlres.h>
#include <wx/valnum.h>

#include "NetworkPropertiesDlg.h"

#include "network/Networks.h"
#include "network/Network.h"

using namespace std;

NetworkPropertiesDlg::NetworkPropertiesDlg(std::shared_ptr<Networks> networks, std::shared_ptr<Network> network) :
    mNetworks(networks), mNetwork(network)
{
    wxXmlResource::Get()->LoadDialog(this, nullptr, "NetworkPropertiesDlg");
    Bind(wxEVT_BUTTON, &NetworkPropertiesDlg::OnOk, this, XRCID("wxID_OK"));

    mNameCtrl = XRCCTRL(*this, "network_name", wxTextCtrl);
    mNameCtrl->SetValue(mNetwork->GetName());
}


void NetworkPropertiesDlg::OnOk(wxCommandEvent& event)
{
    auto name = mNameCtrl->GetValue();
    auto nameW = name.ToStdWstring();

    if(name == L"")
    {
        wxMessageBox(L"Network name required.");

        return;
    }

    // Does it already exist
    auto existing = mNetworks->Get(nameW);
    if(existing != nullptr && existing != mNetwork)
    {
        auto next = mNetworks->NextFreeName();
        mNameCtrl->SetValue(next);
        wxString msg(L"Network name already exists. You might consider: ");
        wxMessageBox(msg + next);

        return;
    }

    if(Validate() && TransferDataFromWindow())
    {
        mNetwork->SetName(nameW);
        EndModal(wxID_OK);
    }
}
