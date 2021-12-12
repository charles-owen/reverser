/**
 * @file Pad.h
 * @author Charles Owen
 *
 * Circuit board pad
 */

#ifndef REVERSER_PAD_H
#define REVERSER_PAD_H

#include "Primitive.h"

/**
 * Circuit board pad
 */
class Pad : public Primitive {
private:
    std::wstring mName;
    double mX;
    double mY;
    double mDrill;
    double mDiameter;
    std::wstring mShape;
    std::wstring mRot;

    // Path shape for long
    wxGraphicsPath mPathLong;

public:
    Pad(wxXmlNode* node);

    void Draw(wxGraphicsContext* graphics) override;

};

#endif //REVERSER_PAD_H
