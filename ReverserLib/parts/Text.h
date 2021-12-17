/**
 * @file Text.h
 * @author Charles Owen
 *
 * Text as part of a package.
 */

#ifndef REVERSER_TEXT_H
#define REVERSER_TEXT_H

#include "Primitive.h"

/**
 * Text as part of a package.
 */
class Text : public Primitive {
private:
    double mX;
    double mY;
    double mSize;
    int mLayer;
    std::wstring mRot;
    std::wstring mText;

public:
    Text(wxXmlNode* node);
};

#endif //REVERSER_TEXT_H
