/**
 * @file Attribute.h
 * @author Charles B. Owen
 *
 * Attributes that can be attached to Components.
 *
 */

#ifndef REVERSER_ATTRIBUTE_H
#define REVERSER_ATTRIBUTE_H

#include <string>

class wxXmlNode;

/**
 * Attributes that can be attached to Components.
 */
class Attribute
{
public:
    Attribute();
    Attribute(const std::wstring &name, const std::wstring &value=L"");

    const std::wstring& GetName() const {return mName;}
    void SetName(const std::wstring& mName) {Attribute::mName = mName;}
    const std::wstring& GetValue() const {return mValue;}
    void SetValue(const std::wstring& mValue) { Attribute::mValue = mValue;}

    void XmlSave(wxXmlNode *node);
    void XmlLoad(wxXmlNode *node);

private:
    std::wstring mName; ///< Attribute name
    std::wstring mValue; ///< Attribute value
};

#endif //REVERSER_ATTRIBUTE_H
