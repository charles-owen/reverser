/**
 * @file Layer.h
 * @author Charles B. Owen
 *
 *
 * Represents a PCB layer image (top or bottom)
 */

#ifndef REVERSER_LAYER_H
#define REVERSER_LAYER_H

#include <memory>

class wxXmlNode;
class wxGraphicsContext;
class PCB;

/**
 * Represents a PCB layer image (top or bottom)
 */
class Layer
{
public:
    Layer(PCB *pcb) : mPCB(pcb) {}

    void Properties(wxWindow* mainFrame);

    double GetWidth() const { return mWidth; }
    double GetHeight() const { return mHeight; }
    double GetX() const { return mX; }
    double GetY() const { return mY; }
    std::wstring GetFilename() const { return mFilename; }
    void SetDimensions(double x, double y, double width, double height);

    const std::shared_ptr<wxImage>& GetImage() const { return mImage; }
    void SetImage(wxString filename, std::shared_ptr<wxImage> image);

    PCB *GetPCB() {return mPCB;}

    void Draw(wxGraphicsContext *graphics);

    void XmlSave(const std::wstring& designPath, wxXmlNode *node);
    void XmlLoad(wxWindow* parent, const std::wstring& designPath, wxXmlNode* node);

    void SetOpacity(double opacity);

private:
    void AddAlpha();

    PCB *mPCB;              // PCB this is a layer for

    double mWidth = 150;    // Image width in millimeters
    double mHeight = 150;   // Image height in millimeters
    double mX = 0;          // X location of top left corner of the layer on the board
    double mY = 0;          // Y location of top left corner of the layer on the board
    std::wstring mFilename;     // Filename for the image (relative to project file path)
    double mOpacity = 0;    // Current bitmap opacity

    std::shared_ptr<wxImage> mImage;    // The raw layer image
    std::shared_ptr<wxBitmap> mBitmap;  // The layer image as a bitmap

};

#endif //REVERSER_LAYER_H
