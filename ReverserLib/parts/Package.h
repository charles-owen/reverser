/**
 * @file Package.h
 * @author Charles Owen
 *
 * A package is a layout symbol.
 */

#ifndef REVERSER_PACKAGE_H
#define REVERSER_PACKAGE_H

#include "LibraryItem.h"

class Primitive;
class Element;
class PCBContext;

/**
 * A package is a layout symbol.
 */
class Package : public LibraryItem {
private:
    /// Part description
    std::wstring mDescription;

    /// The primitives we draw, in order
    std::vector<std::shared_ptr<Primitive>> mPrimitives;

public:
    Package(wxXmlNode* node, const std::wstring& libraryName);
    void Draw(wxGraphicsContext* graphics, PCBContext* context, Element* element);

    bool Click(Element* element, PCBContext* context, const wxPoint2DDouble& point);
};

#endif //REVERSER_PACKAGE_H
