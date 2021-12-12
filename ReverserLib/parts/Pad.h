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
    std::wstring mRotation;


public:
    Pad(wxXmlNode* node);

};

#endif //REVERSER_PAD_H
