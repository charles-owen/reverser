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
//#include "../network/NetworkListBox.h"

class wxToggleButton;

class MainFrame;
class Design;
class Reverser;
class PCBView;

/**
 * PCB User Interface panel
 */
class PCBPanel : public wxPanel
{
private:
    Reverser *mReverser;
    MainFrame* mMainFrame;
    PCBView* mPCBView;

    wxButton *mCompEditSelect;
    wxButton *mNetEditSelect;

    void OnPCBProperties(wxCommandEvent &event);
    void OnPCBTop(wxCommandEvent& event);
    void OnPCBTopUpdate(wxUpdateUIEvent& event);
    void OnPCBBot(wxCommandEvent& event);
    void OnPCBBotUpdate(wxUpdateUIEvent& event);
    void OnPCBAddPart(wxCommandEvent& event);
    void OnCompEditToggle(wxCommandEvent& event);
    void OnNetEditToggle(wxCommandEvent& event);
    void UpdateUI();

    /// Editing context for the PCB
    PCBContext mContext;

    /// The networks list box
    // NetworkListBox mNetworkListBox;

    wxBitmap mNetGryBitmap;
    wxBitmap mNetRedBitmap;
    wxBitmap mMoveGryBitmap;
    wxBitmap mMoveRedBitmap;

public:
    PCBPanel(MainFrame* mainFrame, Reverser *reverser, std::wstring resourcesDir);
    ~PCBPanel();

    MainFrame *GetMainFrame() {return mMainFrame;}
    PCBContext *GetContext() {return &mContext;}

    void OnComponentsDelete(wxCommandEvent& event);
    void OnComponentsDeleteUpdate(wxUpdateUIEvent& event);
    void OnComponentsEdit(wxCommandEvent& event);
    void OnComponentsEditUpdate(wxUpdateUIEvent& event);

    void OnNetworksNewNetwork(wxCommandEvent& event);

    PCBView *GetView() {return mPCBView;}


};

#endif //REVERSER_PCBPANEL_H
