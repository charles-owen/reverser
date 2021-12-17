/**
 * @file Package.h
 * @author Charles Owen
 *
 * A package is a layout symbol.
 */

#ifndef REVERSER_PACKAGE_H
#define REVERSER_PACKAGE_H

class Primitive;
class Element;
class PCBContext;

/**
 * A package is a layout symbol.
 */
class Package {
private:
    /// Parts are members of libraries
    std::wstring mLibrary;

    /// Parts have a name (unique only to the library)
    std::wstring mName;

    /// Part description
    std::wstring mDescription;

    /// The primitives we draw, in order
    std::vector<std::shared_ptr<Primitive>> mPrimitives;

public:
    Package(wxXmlNode* node, const std::wstring& libraryName);
    void Draw(wxGraphicsContext* graphics, PCBContext* context, Element* element);

    auto GetLibrary() {return mLibrary;}
    auto GetName() {return mName;}

    bool Click(Element* element, PCBContext* context, const wxPoint2DDouble& point);
};

#endif //REVERSER_PACKAGE_H
