/**
 * @file PCBPropertiesDlg.h
 * @author Charles B. Owen
 *
 * OnPCBProperties dialog box for the PCB class.
 *
 */

#ifndef REVERSER_PCBPROPERTIESDLG_H
#define REVERSER_PCBPROPERTIESDLG_H

class PCB;


/**
 * OnPCBProperties dialog box for the PCB class.
 */
class PCBPropertiesDlg : public wxDialog
{
public:
    PCBPropertiesDlg(wxWindow* parent, std::shared_ptr<PCB> pcb);

private:
    std::shared_ptr<PCB> mPCB;

    double mWidth;
    double mHeight;
    double mRotation;

    void OnOk(wxCommandEvent& event);
};

#endif //REVERSER_PCBPROPERTIESDLG_H
