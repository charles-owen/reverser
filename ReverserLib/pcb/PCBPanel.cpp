/**
 * @file PCBPanel.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include "PCBPanel.h"

#include "../Reverser.h"
#include "../design/Design.h"
#include "PCB.h"
#include "Layer.h"
#include "PCBView.h"
#include "../MainFrame.h"
#include "../dlg/PCBPropertiesDlg.h"

//#include "../components/Component.h"
//#include "../components/Components.h"
//#include "../components/LayoutComponent.h"
//#include "../components/Part.h"

//#include "../dlg/PartAddDlg.h"
//#include "../dlg/ComponentPropertiesDlg.h"
//#include "../dlg/NetworkPropertiesDlg.h"
//#include "../network/Networks.h"
//#include "../network/Network.h"

#include <wx/xrc/xmlres.h>
#include <wx/tglbtn.h>

PCBPanel::PCBPanel(MainFrame* mainFrame, Reverser* reverser, std::wstring resourcesDir) : wxPanel(mainFrame, wxID_ANY),
       mMainFrame(mainFrame), mReverser(reverser), mContext(this)
{
    auto sizer = new wxBoxSizer(wxHORIZONTAL);
    mPCBView= new PCBView(this, mainFrame, reverser);
    sizer->Add(mPCBView, 1, wxEXPAND | wxALL, 0);

    mCompEditSelect = XRCCTRL(*mainFrame, "pcb_comp_edit", wxButton);
    mNetEditSelect = XRCCTRL(*mainFrame, "pcb_net_edit", wxButton);

    mainFrame->Bind(wxEVT_COMMAND_MENU_SELECTED, &PCBPanel::OnPCBProperties, this, XRCID("pcb_properties"));
    mainFrame->Bind(wxEVT_COMMAND_MENU_SELECTED, &PCBPanel::OnPCBTop, this, XRCID("pcb_top"));
    mainFrame->Bind(wxEVT_UPDATE_UI, &PCBPanel::OnPCBTopUpdate, this, XRCID("pcb_top"));
    mainFrame->Bind(wxEVT_COMMAND_MENU_SELECTED, &PCBPanel::OnPCBBot, this, XRCID("pcb_bottom"));
    mainFrame->Bind(wxEVT_UPDATE_UI, &PCBPanel::OnPCBBotUpdate, this, XRCID("pcb_bottom"));

//    Bind(wxEVT_BUTTON, &PCBPanel::OnPCBAddPart, this, XRCID("pcb_add_part"));

    mainFrame->Bind(wxEVT_BUTTON, &PCBPanel::OnCompEditToggle, this, XRCID("pcb_comp_edit"));
    mainFrame->Bind(wxEVT_BUTTON, &PCBPanel::OnNetEditToggle, this, XRCID("pcb_net_edit"));

//    mNetworkListBox.Attach(this, L"pcb_network_list");

    mNetGryBitmap.LoadFile(resourcesDir + L"/xrc/icons/net-gry.png", wxBITMAP_TYPE_ANY);
    mNetRedBitmap.LoadFile(resourcesDir + L"/xrc/icons/net-red.png", wxBITMAP_TYPE_ANY);
    mMoveGryBitmap.LoadFile(resourcesDir + L"/xrc/icons/move-gry.png", wxBITMAP_TYPE_ANY);
    mMoveRedBitmap.LoadFile(resourcesDir + L"/xrc/icons/move-red.png", wxBITMAP_TYPE_ANY);

    SetSizer( sizer );
    Layout();

    UpdateUI();
}

PCBPanel::~PCBPanel()
{
}


void PCBPanel::OnCompEditToggle(wxCommandEvent& event)
{
    mContext.SetMode(PCBContext::EditMode::Components);
    UpdateUI();
    Refresh();
}

void PCBPanel::OnNetEditToggle(wxCommandEvent& event)
{
    mContext.SetMode(PCBContext::EditMode::Networks);
    UpdateUI();
    Refresh();
}


void PCBPanel::UpdateUI()
{
    switch(mContext.GetMode())
    {
        case PCBContext::EditMode::Components:
            mNetEditSelect->SetBitmap(mNetGryBitmap);
            mCompEditSelect->SetBitmap(mMoveRedBitmap);
            break;

        case PCBContext::EditMode::Networks:
            mNetEditSelect->SetBitmap(mNetRedBitmap);
            mCompEditSelect->SetBitmap(mMoveGryBitmap);
            break;
    }
}


void PCBPanel::OnPCBProperties(wxCommandEvent &event)
{
    auto pcb = mReverser->GetDesign()->GetPCB();
    PCBPropertiesDlg dlg(mMainFrame, pcb);
    dlg.ShowModal();
}

void PCBPanel::OnPCBTop(wxCommandEvent &event)
{
    auto pcb = mReverser->GetDesign()->GetPCB();
    pcb->GetTop()->Properties(mMainFrame);
}

void PCBPanel::OnPCBTopUpdate(wxUpdateUIEvent& event)
{
    auto path = mReverser->GetDesign()->GetFilePath();
    event.Enable(path != L"");
}


void PCBPanel::OnPCBBot(wxCommandEvent &event)
{
    auto pcb = mReverser->GetDesign()->GetPCB();
    pcb->GetBottom()->Properties(mMainFrame);
}

void PCBPanel::OnPCBBotUpdate(wxUpdateUIEvent& event)
{
    auto path = mReverser->GetDesign()->GetFilePath();
    event.Enable(path != L"");
}


///**
// * Add part toolbar item
// * @param event Comment event
// */
//void PCBPanel::OnPCBAddPart(wxCommandEvent& event)
//{
//    auto model = mReverser->GetDesign();
//    auto components = model->GetComponents();
//    auto pcb = model->GetPCB();
//
//    // Select the part
//    PartAddDlg dlg(mReverser->GetParts());
//    if(dlg.ShowModal() != wxID_OK)
//    {
//        return;
//    }
//
//    auto part = dlg.GetPart();
//
//    // Create a component
//    auto component = std::make_shared<Component>();
//    component->SetPart(part);
//
//    // Give it a component number
//    auto prefix = part->GetPrefix();
//    component->SetNumber(components->NextFree(prefix));
//
//    // Edit it
//    ComponentPropertiesDlg dlg2(components, component);
//    if(dlg2.ShowModal() != wxID_OK)
//    {
//        return;
//    }
//
//    // Create layout component for displaying this
//    auto layoutComponent = std::make_shared<LayoutComponent>();
//    layoutComponent->SetComponent(component);
//
//    // Set to center of current view
//    auto center = mPCBView->GetViewCenter();
//    layoutComponent->GetPlacement()->SetPosition(center);
//
//    // Add the component and layout component
//    components->Add(component);
//    pcb->Add(layoutComponent);
//    model->UpdateObservers();
//}
//
//void PCBPanel::OnComponentsDelete(wxCommandEvent& event)
//{
//    auto selected = mContext.GetSelectedComponent();
//
//    if(selected != nullptr)
//    {
//        wxMessageDialog dlg( this,
//                wxT("Are you sure you want to delete?"),
//                L"Delete component?",
//                wxOK | wxCANCEL | wxCENTRE);
//
//        if(dlg.ShowModal() == wxID_OK)
//        {
//            mReverser->GetDesign()->Delete(selected->GetComponent());
//            Refresh();
//        }
//    }
//}
//
//void PCBPanel::OnComponentsDeleteUpdate(wxUpdateUIEvent& event)
//{
//    auto selected = mContext.GetSelectedComponent();
//    event.Enable(mContext.IsMode(PCBContext::EditMode::Components) && selected != nullptr);
//}
//
//void PCBPanel::OnComponentsEdit(wxCommandEvent& event)
//{
//    auto model = mReverser->GetDesign();
//    auto components = model->GetComponents();
//    auto selected = mContext.GetSelectedComponent();
//
//    if(selected != nullptr)
//    {
//        // Edit it
//        ComponentPropertiesDlg dlg2(components, selected->GetComponent());
//        if (dlg2.ShowModal() != wxID_OK)
//        {
//            return;
//        }
//        Refresh();
//    }
//}
//
//void PCBPanel::OnComponentsEditUpdate(wxUpdateUIEvent& event)
//{
//    auto selected = mContext.GetSelectedComponent();
//    event.Enable(mContext.IsMode(PCBContext::EditMode::Components) && selected != nullptr);
//}
//
//void PCBPanel::OnNetworksNewNetwork(wxCommandEvent& event)
//{
//    auto model = mReverser->GetDesign();
//    auto networks = model->GetNetworks();
//
//    // Create a network
//    auto network = std::make_shared<Network>();
//
//    // Give it a network name
//    network->SetName(networks->NextFreeName());
//
//    // Edit it
//
//    NetworkPropertiesDlg dlg(networks, network);
//    if(dlg.ShowModal() != wxID_OK)
//    {
//        return;
//    }
//
//    networks->Add(network);
//    model->UpdateObservers();
//}
