/**
 * @file NetworkListBox.h
 * @author Charles B. Owen
 *
 * Controller for a networks list box, as used by the PCB and
 * eventually also the schematic panels.
 *
 */

#ifndef REVERSER_NETWORKLISTBOX_H
#define REVERSER_NETWORKLISTBOX_H

#include "IModelObserver.h"

class Reverser;
class PCBContext;

/**
 * Controller for a networks list box, as used by the PCB and
 * eventually also the schematic panels.
 */
class NetworkListBox : public IModelObserver
{
public:
    NetworkListBox(Reverser *reverser, PCBContext *context);

    void Attach(wxPanel *panel, wxString listBoxName);

    virtual void UpdateObserver() override;

private:
    Reverser *mReverser;
    PCBContext *mContext;

    wxListBox *mListBox;
};

#endif //REVERSER_NETWORKLISTBOX_H
