/**
 * @file DesignProperitesDlg.h
 * @author Charles Owen
 *
 * Design properties dialog box.
 */

#ifndef REVERSER_DESIGNPROPERTIESDLG_H
#define REVERSER_DESIGNPROPERTIESDLG_H

class Design;
class Schematic;
class Board;

/**
 * Design properties dialog box.
 */
class DesignPropertiesDlg : public wxDialog {
private:
    void OnOK(wxCommandEvent& event);
    void OnSchematicFile(wxCommandEvent& event);
    void OnBoardFile(wxCommandEvent& event);
    void UpdateUI();

    /// Design we are editing
    Design *mDesign;

    /// The schematic object
    std::shared_ptr<Schematic> mSchematic;

    /// The board object
    std::shared_ptr<Board> mBoard;

public:
    DesignPropertiesDlg(wxWindow *parent, Design* design);

};

#endif //REVERSER_DESIGNPROPERTIESDLG_H
