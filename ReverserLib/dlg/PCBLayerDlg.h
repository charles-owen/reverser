/**
 * @file PCBLayerDlg.h
 * @author Charles B. Owen
 *
 * Printed circuit board layer edit dialog box
 *
 */

#ifndef REVERSER_PCBLAYERDLG_H
#define REVERSER_PCBLAYERDLG_H

class Layer;

/**
 * Printed circuit board layer edit dialog box
 */
class PCBLayerDlg : public wxDialog
{
public:
    PCBLayerDlg(wxWindow* parent, Layer *layer);

private:
    Layer *mLayer;

    double mWidth = 150;    // Image width in millimeters
    double mHeight = 150;   // Image height in millimeters
    double mX = 0;          // X location of top left corner of the layer on the board
    double mY = 0;          // Y location of top left corner of the layer on the board
    wxString mFilename;     // Filename for the image (relative to project file path)

    std::shared_ptr<wxImage> mImage;   // The layer image

    bool mInTextHandler = false;

    void OnOk(wxCommandEvent& event);
    void OnFile(wxCommandEvent& event);

    void OnWidthText(wxCommandEvent& event);
    void OnHeightText(wxCommandEvent& event);

    void UpdateAspectRatio(bool widToHeight);
};

#endif //REVERSER_PCBLAYERDLG_H
