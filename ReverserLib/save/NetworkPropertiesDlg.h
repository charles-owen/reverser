/**
 * @file NetworkPropertiesDlg.h
 * @author Charles B. Owen
 *
 * Network properties dialog box
 *
 */

#ifndef REVERSER_NETWORKPROPERTIESDLG_H
#define REVERSER_NETWORKPROPERTIESDLG_H

class Network;
class Networks;

/**
 * Network properties dialog box
 */
class NetworkPropertiesDlg : public wxDialog
{
public:
    NetworkPropertiesDlg(std::shared_ptr<Networks> networks,
            std::shared_ptr<Network> network);


private:
    /// Networks collection
    std::shared_ptr<Networks> mNetworks;

    /// Network we are editing
    std::shared_ptr<Network> mNetwork;

    /// Network name control
    wxTextCtrl *mNameCtrl;

    void OnOk(wxCommandEvent& event);
};

#endif //REVERSER_NETWORKPROPERTIESDLG_H
