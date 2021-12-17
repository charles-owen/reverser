/**
 * @file Elements.h
 * @author Charles Owen
 *
 * Collection of elements. An element is a board part such
 * as an integrated circuit or resistor.
 */

#ifndef REVERSER_ELEMENTS_H
#define REVERSER_ELEMENTS_H

class Packages;
class Element;
class PCBContext;

/**
 * Collection of elements. An element is a board part such
 * as an integrated circuit or resistor.
 */
class Elements {
private:

    std::vector<std::shared_ptr<Element>> mElements;

public:
    bool XmlLoad(wxXmlNode* root, Packages* packages);
    void Draw(wxGraphicsContext* graphics,  PCBContext* context, int pcbWidth, int pcbHeight);

    std::shared_ptr<Element> Find(const std::wstring& name);

    bool Click(PCBContext* context, const wxPoint2DDouble& point);
};

#endif //REVERSER_ELEMENTS_H
