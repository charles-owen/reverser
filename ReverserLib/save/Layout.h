/**
 * @file Layout.h
 * @author Charles B. Owen
 *
 * Represents a single PCB layout
 *
 */

#ifndef REVERSER_LAYOUT_H
#define REVERSER_LAYOUT_H

#include <string>
#include <vector>

#include "drawing/Drawable.h"

class wxXmlNode;

/**
 * Represents a single PCB layout
 */
class Layout
{
public:

    bool Load(wxString path, wxString name, bool silent);

    const std::wstring GetName() const {return mName;}
    const std::wstring GetDescription() const {return mDescription;}
    Drawable *GetDrawable() {return &mDrawable;}

    int NumPins() const {return mPins.size();}

    class Pin
    {
    public:
        Pin(int n, double x, double y, double d) :
                mN(n), mX(x), mY(y), mDiameter(d) {}

        int GetN() {return mN;}
        double GetX() {return mX;}
        double GetY() {return mY;}
        double GetDiameter() {return mDiameter;}

    private:
        int mN;
        double mX;
        double mY;
        double mDiameter;
    };

private:
    std::wstring mName;
    std::wstring mDescription;

    double mDefaultPad = 3.0;

    void XmlDesc(wxXmlNode* node);
    void XmlPins(wxXmlNode* node);
    void XmlPinsPin(wxXmlNode* node);

    std::vector<std::shared_ptr<Pin>> mPins;

    /// Drawing the symbol
    Drawable mDrawable;

public:
    std::vector<std::shared_ptr<Pin>>::iterator begin() { return mPins.begin(); }
    std::vector<std::shared_ptr<Pin>>::iterator end() { return mPins.end(); }
};

#endif //REVERSER_LAYOUT_H
