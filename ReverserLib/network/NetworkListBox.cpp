/**
 * @file NetworkListBox.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include <wx/xrc/xmlres.h>
#include <algorithm>

#include "../Reverser.h"
#include "../Design.h"
#include "../network/Networks.h"
#include "../network/Network.h"

#include "NetworkListBox.h"

NetworkListBox::NetworkListBox(Reverser *reverser, PCBContext* context) :
    mReverser(reverser), mContext(context)
{
    reverser->GetDesign()->AddObserver(this);
}

void NetworkListBox::Attach(wxPanel *panel, wxString listBoxName)
{
    mListBox = XRCCTRL(*panel, listBoxName, wxListBox);

//    mListBox->Append("NET001");
//    mListBox->Append("NET003");
//    mListBox->Append("NET002");


}


void NetworkListBox::UpdateObserver()
{
    auto model = mReverser->GetDesign();
    auto networks = model->GetNetworks();

    auto listBoxItems = mListBox->GetStrings();
    std::vector<wxString> networkNames;

    for(auto network : *networks)
    {
        networkNames.push_back(network->GetName());
    }

    std::sort(networkNames.begin(), networkNames.end());
    std::vector<wxString> newNetworks(networkNames.size());
    auto it = std::set_difference(networkNames.begin(), networkNames.end(),
            listBoxItems.begin(), listBoxItems.end(),
            newNetworks.begin());

    newNetworks.resize(it - newNetworks.begin());

    std::vector<wxString> deletedNetworks(listBoxItems.size());
    it = std::set_difference(listBoxItems.begin(), listBoxItems.end(),
            networkNames.begin(), networkNames.end(),
            deletedNetworks.begin());

    deletedNetworks.resize(it - deletedNetworks.begin());

    for(auto newNetwork : newNetworks)
    {
        mListBox->Append(newNetwork);
    }

    for(auto deletedNetwork : deletedNetworks)
    {
        auto found = mListBox->FindString(deletedNetwork, true);
        if(found != wxNOT_FOUND)
        {
            mListBox->Delete(found);
        }
    }
}
