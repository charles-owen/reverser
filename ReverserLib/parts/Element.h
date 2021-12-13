/**
 * @file Element.h
 * @author Charles Owen
 *
 * An element is a circuit component such as an integrated circuit
 * or transistor or resistor.
 */

#ifndef REVERSER_ELEMENT_H
#define REVERSER_ELEMENT_H

class Packages;
class Package;
class Elements;
class Attribute;

/**
 * An element is a circuit component such as an integrated circuit
 * or transistor or resistor.
 */
class Element {
private:

    std::wstring mName;
    std::shared_ptr<Package> mPackage;
    std::wstring mValue;
    double mX;
    double mY;
    std::wstring mRot;
    std::wstring mSmashed;

    /// The board element node
    wxXmlNode* mNode;

    std::vector<std::shared_ptr<Attribute>> mAttributes;

public:
    Element(wxXmlNode* node, Packages* packages);
    void Draw(wxGraphicsContext* graphics, int pcbWidth, int pcbHeight);

    auto GetName() {return mName;}
    auto GetValue() {return mValue;}
};

#endif //REVERSER_ELEMENT_H
