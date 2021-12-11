/**
 * @file Component.h
 * @author Charles B. Owen
 *
 * Component for a model.
 *
 */

#ifndef REVERSER_COMPONENT_H
#define REVERSER_COMPONENT_H

#include <string>

#include "Placement.h"

class Part;
class Parts;
class Attribute;
class wxXmlNode;
class Layout;


/**
 * Component for a model.
 */
class Component
{
public:
    Component();

    /// Index into mAttributes for the component number
    static const int NumberIndex = 0;

    /// Index into mAttributes for the component value
    static const int ValueIndex = 1;

    const std::shared_ptr<Part>& GetPart() const;
    void SetPart(const std::shared_ptr<Part>& mPart);

    const std::wstring& GetNumber() const;
    void SetNumber(const std::wstring& mNumber);

    std::wstring GetPrefix() const;
    int GetNumberNumber() const;

    std::shared_ptr<Attribute> GetAttribute(const std::wstring &name);
    std::shared_ptr<Attribute> GetAttribute(const wxString &name) {return GetAttribute(name.ToStdWstring());}
    std::shared_ptr<Attribute> GetAttribute(const wchar_t *name) {return GetAttribute(wxString(name));}

    /**
     * Get the attributes. Returns a copy of the attributes collection.
     * @return Copy of the attributes collection
     */
    std::vector<std::shared_ptr<Attribute>> GetAttributes() {return mAttributes;}

    void XmlSave(wxXmlNode *node);
    void XmlLoad(wxXmlNode *node, Parts *parts);

    std::shared_ptr<Layout> GetLayout();

private:
    /// The part
    std::shared_ptr<Part> mPart;

    /// Component number on the circuit
    std::wstring mNumber;

    /// Attributes associated with the model
    std::vector<std::shared_ptr<Attribute>> mAttributes;

public:
    static bool IsValidNumber(std::wstring number);

    static std::wstring GetPrefix(std::wstring number);
};

#endif //REVERSER_COMPONENT_H
