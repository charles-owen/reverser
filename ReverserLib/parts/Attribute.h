/**
 * @file Attribute.h
 * @author Charles Owen
 *
 * Attributes attached to an element.
 */

#ifndef REVERSER_ATTRIBUTE_H
#define REVERSER_ATTRIBUTE_H

/**
 * Attributes attached to an element.
 */
class Attribute {
private:
    wxXmlNode* mNode;

    std::wstring mName;
    std::wstring mValue;
    double mX;
    double mY;
    double mSize;
    int mLayer;
    std::wstring mRot;
    std::wstring mAlign;

public:
    Attribute(wxXmlNode* node);

};

#endif //REVERSER_ATTRIBUTE_H
