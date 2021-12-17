/**
 * @file Attribute.h
 * @author Charles Owen
 *
 * Attributes attached to an element.
 */

#ifndef REVERSER_ATTRIBUTE_H
#define REVERSER_ATTRIBUTE_H

class Element;

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
    bool mDisplay = true;

public:
    Attribute(wxXmlNode* node);

    void Draw(wxGraphicsContext* graphics, Element* element);
    void Move(const wxPoint2DDouble &delta);
};

#endif //REVERSER_ATTRIBUTE_H
