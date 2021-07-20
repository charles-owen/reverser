/**
 * @file Attribute.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include <wx/xml/xml.h>

#include "Attribute.h"

/**
 * Default constructor, used when name and value are not yet known.
 */
Attribute::Attribute()
{
}


/**
 * Constructor
 * @param name Attribute name
 * @param value Attribute value
 */
Attribute::Attribute(const std::wstring& name, const std::wstring& value) :
    mName(name), mValue(value)
{

}

/**
 * Save attribute to XML node
 * @param node XML node to save to
 */
void Attribute::XmlSave(wxXmlNode* node)
{
    auto attributeNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"attribute");
    node->AddChild(attributeNode);

    attributeNode->AddAttribute(L"name", mName);
    attributeNode->AddAttribute(L"value", mValue);
}

/**
 * Load attribute from an XML node
 * @param node XML node to load from
 */
void Attribute::XmlLoad(wxXmlNode* node)
{
    mName = node->GetAttribute(L"name");
    mValue = node->GetAttribute(L"value");
}
