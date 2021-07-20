/**
 * @file Placement.h
 * @author Charles B. Owen
 *
 * Specify the placement of a layout on a PCB or a symbol
 * on a schematic.
 *
 */

#ifndef REVERSER_PLACEMENT_H
#define REVERSER_PLACEMENT_H

#include <wx/xml/xml.h>
/**
 * Specify the placement of a layout on a PCB or a symbol
 * on a schematic.
 */
class Placement
{
public:
    double GetX() const
    {
        return mX;
    }
    void SetX(double mX)
    {
        Placement::mX = mX;
    }
    double GetY() const
    {
        return mY;
    }

    void SetY(double y) {mY = y;}
    void SetPosition(wxPoint2DDouble pos) {mX = pos.m_x; mY = pos.m_y;}


    double GetRotation() const
    {
        return mRotation;
    }
    void SetRotation(double mRotation)
    {
        Placement::mRotation = mRotation;
    }
    double GetSize() const
    {
        return mSize;
    }
    void SetSize(double mSize)
    {
        Placement::mSize = mSize;
    }
    bool IsShown() const { return mShow; }
    void SetShown(bool show) { mShow = show; }

    void Move(const wxPoint2DDouble& delta);
    void Rotate(double angle) {mRotation += angle;}

    wxPoint2DDouble ToLocal(const wxPoint2DDouble& position, bool noTranslation=false);

    void XmlSave(wxXmlNode* node);
    void XmlLoad(wxXmlNode* node);

    void Apply(wxGraphicsContext* graphics);
    void UnApply(wxGraphicsContext* graphics);


private:
    /// X location in millimeters
    double mX = 0;

    /// Y location in millimeters
    double mY = 0;

    /// Placement rotation in degrees
    double mRotation = 0;

    /// Size scaling factor for placement
    double mSize = 1;

    /// Should the placement be shown?
    bool mShow = true;


};

#endif //REVERSER_PLACEMENT_H
