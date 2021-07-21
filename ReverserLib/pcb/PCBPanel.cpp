/**
 * @file PCBPanel.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include "PCBPanel.h"

#include "../Reverser.h"
#include "../Model.h"
#include "PCB.h"
#include "Layer.h"

#include "PCBView.h"
#include "../MainFrame.h"
#include "../components/Component.h"
#include "../components/Components.h"
#include "../components/LayoutComponent.h"
#include "../components/Part.h"
#include "../dlg/PCBPropertiesDlg.h"
#include "../dlg/PartAddDlg.h"
#include "../dlg/ComponentPropertiesDlg.h"
#include "../dlg/NetworkPropertiesDlg.h"
#include "../network/Networks.h"
#include "../network/Network.h"


#include <wx/xrc/xmlres.h>
#include <wx/tglbtn.h>

PCBPanel::PCBPanel(MainFrame* mainFrame, Reverser* reverser, wxWindow* parent) :
       mMainFrame(mainFrame), mReverser(reverser), mContext(this),
       mNetworkListBox(reverser, &mContext)
{
    wxXmlResource::Get()->LoadPanel(this, parent, wxT("PCBPanel"));

    auto dummyPanel = XRCCTRL(*this, "pcb_view", wxPanel);
    auto viewSizer = dummyPanel->GetContainingSizer();
    auto viewParent = dummyPanel->GetParent();
    dummyPanel->Destroy();

    mPCBView= new PCBView(this, reverser, viewParent);
    viewSizer->Add(mPCBView, 1, wxEXPAND | wxALL, 0);

    mCompEditSelect = XRCCTRL(*this, "pcb_comp_edit", wxBitmapButton);
    mCompEditSelect->SetBackgroundColour(*wxRED);
    mNetEditSelect = XRCCTRL(*this, "pcb_net_edit", wxBitmapButton);

    mainFrame->Bind(wxEVT_COMMAND_MENU_SELECTED, &PCBPanel::OnPCBProperties, this, XRCID("pcb_properties"));
    mainFrame->Bind(wxEVT_COMMAND_MENU_SELECTED, &PCBPanel::OnPCBTop, this, XRCID("pcb_top"));
    mainFrame->Bind(wxEVT_UPDATE_UI, &PCBPanel::OnPCBTopUpdate, this, XRCID("pcb_top"));
    mainFrame->Bind(wxEVT_COMMAND_MENU_SELECTED, &PCBPanel::OnPCBBot, this, XRCID("pcb_bottom"));
    mainFrame->Bind(wxEVT_UPDATE_UI, &PCBPanel::OnPCBBotUpdate, this, XRCID("pcb_bottom"));

    Bind(wxEVT_BUTTON, &PCBPanel::OnPCBAddPart, this, XRCID("pcb_add_part"));

    Bind(wxEVT_TOGGLEBUTTON, &PCBPanel::OnCompEditToggle, this, XRCID("pcb_comp_edit"));
    Bind(wxEVT_TOGGLEBUTTON, &PCBPanel::OnNetEditToggle, this, XRCID("pcb_net_edit"));

    mNetworkListBox.Attach(this, L"pcb_network_list");

    UpdateUI();
}

PCBPanel::~PCBPanel()
{
    mMainFrame->Unbind(wxEVT_COMMAND_MENU_SELECTED, &PCBPanel::OnPCBProperties, this);
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
            mCompEditSelect->SetBackgroundColour(*wxRED);
            mNetEditSelect->SetBackgroundColour(wxNullColour);
            break;

        case PCBContext::EditMode::Networks:
            mCompEditSelect->SetBackgroundColour(wxNullColour);
            mNetEditSelect->SetBackgroundColour(*wxRED);
            break;
    }
}

void PCBPanel::OnPCBTop(wxCommandEvent &event)
{
    auto pcb = mReverser->GetModel()->GetPCB();
    pcb->GetTop()->Properties();
}

void PCBPanel::OnPCBTopUpdate(wxUpdateUIEvent& event)
{
    auto path = mReverser->GetModel()->GetFilePath();
    event.Enable(path != L"");
}


void PCBPanel::OnPCBBot(wxCommandEvent &event)
{
    auto pcb = mReverser->GetModel()->GetPCB();
    pcb->GetBottom()->Properties();
}

void PCBPanel::OnPCBBotUpdate(wxUpdateUIEvent& event)
{
    auto path = mReverser->GetModel()->GetFilePath();
    event.Enable(path != L"");
}

void PCBPanel::OnPCBProperties(wxCommandEvent &event)
{
    auto pcb = mReverser->GetModel()->GetPCB();
    PCBPropertiesDlg dlg(pcb);
    dlg.ShowModal();
}

/**
 * Add part toolbar item
 * @param event Comment event
 */
void PCBPanel::OnPCBAddPart(wxCommandEvent& event)
{
    auto model = mReverser->GetModel();
    auto components = model->GetComponents();
    auto pcb = model->GetPCB();

    // Select the part
    PartAddDlg dlg(mReverser->GetParts());
    if(dlg.ShowModal() != wxID_OK)
    {
        return;
    }

    auto part = dlg.GetPart();

    // Create a component
    auto component = std::make_shared<Component>();
    component->SetPart(part);

    // Give it a component number
    auto prefix = part->GetPrefix();
    component->SetNumber(components->NextFree(prefix));

    // Edit it
    ComponentPropertiesDlg dlg2(components, component);
    if(dlg2.ShowModal() != wxID_OK)
    {
        return;
    }

    // Create layout component for displaying this
    auto layoutComponent = std::make_shared<LayoutComponent>();
    layoutComponent->SetComponent(component);

    // Set to center of current view
    auto center = mPCBView->GetViewCenter();
    layoutComponent->GetPlacement()->SetPosition(center);

    // Add the component and layout component
    components->Add(component);
    pcb->Add(layoutComponent);
    model->UpdateObservers();
}

void PCBPanel::OnComponentsDelete(wxCommandEvent& event)
{
    auto selected = mContext.GetSelectedComponent();

    if(selected != nullptr)
    {
        wxMessageDialog dlg( this,
                wxT("Are you sure you want to delete?"),
                L"Delete component?",
                wxOK | wxCANCEL | wxCENTRE);

        if(dlg.ShowModal() == wxID_OK)
        {
            mReverser->GetModel()->Delete(selected->GetComponent());
            Refresh();
        }
    }
}

void PCBPanel::OnComponentsDeleteUpdate(wxUpdateUIEvent& event)
{
    auto selected = mContext.GetSelectedComponent();
    event.Enable(mContext.IsMode(PCBContext::EditMode::Components) && selected != nullptr);
}

void PCBPanel::OnComponentsEdit(wxCommandEvent& event)
{
    auto model = mReverser->GetModel();
    auto components = model->GetComponents();
    auto selected = mContext.GetSelectedComponent();

    if(selected != nullptr)
    {
        // Edit it
        ComponentPropertiesDlg dlg2(components, selected->GetComponent());
        if (dlg2.ShowModal() != wxID_OK)
        {
            return;
        }
        Refresh();
    }
}

void PCBPanel::OnComponentsEditUpdate(wxUpdateUIEvent& event)
{
    auto selected = mContext.GetSelectedComponent();
    event.Enable(mContext.IsMode(PCBContext::EditMode::Components) && selected != nullptr);
}

void PCBPanel::OnNetworksNewNetwork(wxCommandEvent& event)
{
    auto model = mReverser->GetModel();
    auto networks = model->GetNetworks();

    // Create a network
    auto network = std::make_shared<Network>();

    // Give it a network name
    network->SetName(networks->NextFreeName());

    // Edit it

    NetworkPropertiesDlg dlg(networks, network);
    if(dlg.ShowModal() != wxID_OK)
    {
        return;
    }

    networks->Add(network);
    model->UpdateObservers();
}
