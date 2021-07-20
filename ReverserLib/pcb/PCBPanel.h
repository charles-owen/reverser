/**
 * @file PCBPanel.h
 * @author Charles B. Owen
 *
 *
 * PCB User Interface panel
 */

#ifndef REVERSER_PCBPANEL_H
#define REVERSER_PCBPANEL_H

#include "PCBContext.h"
#include "../network/NetworkListBox.h"

class wxToggleButton;

class MainFrame;
class Model;
class Reverser;
class PCBView;

/**
 * PCB User Interface panel
 */
class PCBPanel : public wxPanel
{
public:
    PCBPanel(MainFrame* mainFrame, Reverser *reverser, wxWindow* parent);
    ~PCBPanel();

    MainFrame *GetMainFrame() {return mMainFrame;}
    PCBContext *GetContext() {return &mContext;}

    void OnComponentsDelete(wxCommandEvent& event);
    void OnComponentsDeleteUpdate(wxUpdateUIEvent& event);
    void OnComponentsEdit(wxCommandEvent& event);
    void OnComponentsEditUpdate(wxUpdateUIEvent& event);

    void OnNetworksNewNetwork(wxCommandEvent& event);

    PCBView *GetView() {return mPCBView;}

private:
    Reverser *mReverser;
    MainFrame* mMainFrame;
    PCBView* mPCBView;

    wxToggleButton *mCompEditSelect;
    wxToggleButton *mNetEditSelect;

    void OnPCBProperties(wxCommandEvent &event);
    void OnPCBTop(wxCommandEvent& event);
    void OnPCBTopUpdate(wxUpdateUIEvent& event);
    void OnPCBBot(wxCommandEvent& event);
    void OnPCBBotUpdate(wxUpdateUIEvent& event);
    void OnPCBAddPart(wxCommandEvent& event);
    void OnCompEditToggle(wxCommandEvent& event);
    void OnNetEditToggle(wxCommandEvent& event);

    /// Editing context for the PCB
    PCBContext mContext;

    /// The networks list box
    NetworkListBox mNetworkListBox;
};

#endif //REVERSER_PCBPANEL_H
