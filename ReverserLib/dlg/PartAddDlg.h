/**
 * @file PartAddDlg.h
 * @author Charles B. Owen
 *
 * Dialog box for selecting a part to add to the model.
 *
 */

#ifndef REVERSER_PARTADDDLG_H
#define REVERSER_PARTADDDLG_H

class Parts;
class Part;

/**
 * Dialog box for selecting a part to add to the model.
 */
class PartAddDlg : public wxDialog
{
public:
    PartAddDlg(Parts *parts);

    const std::shared_ptr<Part>& GetPart() const;

private:
    /// The selected part
    std::shared_ptr<Part> mPart;

    wxListBox *mListBox;

    void OnOk(wxCommandEvent& event);

    std::vector<std::shared_ptr<Part>> mParts;
};

#endif //REVERSER_PARTADDDLG_H
