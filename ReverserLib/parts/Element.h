/**
 * @file Element.h
 * @author Charles Owen
 *
 * An element is a circuit component such as an integrated circuit
 * or transistor or resistor.
 */

#ifndef REVERSER_ELEMENT_H
#define REVERSER_ELEMENT_H

#include "../pcb/PCBContext.h"

class Packages;
class Package;
class Elements;
class Attribute;
class PCBContext;

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
    void Draw(wxGraphicsContext* graphics,  PCBContext* context, int pcbWidth, int pcbHeight);

    auto GetName() {return mName;}
    auto GetValue() {return mValue;}

    bool Click(PCBContext* context, const wxPoint2DDouble& point);

    void Move(const wxPoint2DDouble &delta);

};

#endif //REVERSER_ELEMENT_H
