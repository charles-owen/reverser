/**
 * @file Component.cpp
 * @author Charles B. Owen
 */

#include "pch.h"

#include <wctype.h>
#include <wchar.h>
#include <wx/xml/xml.h>
#include <wx/graphics.h>

#include "Component.h"
#include "Attribute.h"
#include "Part.h"
#include "Parts.h"
#include "Layout.h"
#include "Attribute.h"


using namespace std;

/**
 * Constructor
 */
Component::Component()
{
    // Every component has a number and value attributes
    // These are always the first two attributes.
    mAttributes.push_back(std::make_shared<Attribute>(L"Number"));
    mAttributes.push_back(std::make_shared<Attribute>(L"Value"));
}

const std::wstring& Component::GetNumber() const
{
    return mAttributes[0]->GetValue();
}

void Component::SetNumber(const wstring& number)
{
    mAttributes[NumberIndex]->SetValue(number);
}


const std::shared_ptr<Part>& Component::GetPart() const
{
    return mPart;
}


void Component::SetPart(const std::shared_ptr<Part>& part)
{
    mPart = part;
}

/**
 * Get the prefix from a part number.
 * Q1 will return Q, JP22 will return JP
 * @return Prefix
 */
std::wstring Component::GetPrefix() const
{
    return Component::GetPrefix(GetNumber());
}

/**
 * Get the prefix from a part number.
 * Static function.
 * Q1 will return Q, JP22 will return JP
 * @param number Number to test
 * @return Prefix value
 */
std::wstring Component::GetPrefix(std::wstring number)
{
    for(int i=0; i<number.size();  i++)
    {
        if(iswdigit(number[i]))
        {
            return number.substr(0, i);
        }
    }

    return number;
}

/**
 * Get the number part of a part number.
 * Q1 will return 1, JP22 will return 22
 * @return Number
 */
int Component::GetNumberNumber() const
{
    auto number = GetNumber();

    for(int i=0; i<number.size();  i++)
    {
        if(iswdigit(number[i]))
        {
            return wcstol(number.substr(i).c_str(), nullptr, 10);
        }
    }

    return 0;
}

/**
 * Is this a valid component number?
 * @param number
 * @return
 */
bool Component::IsValidNumber(std::wstring number)
{
    int i;
    for(i=0; ;  i++)
    {
        if(i == number.size())
        {
            // Got to the end, invalid
            return false;
        }

        if(iswdigit(number[i]))
        {
            if(i == 0)
            {
                // No prefix
                return false;
            }

            for( ; i<number.size(); i++)
            {
                if(!iswdigit(number[i]))
                {
                    // Not digits
                    return false;
                }
            }

            return true;
        }

        if(!iswupper(number[i]))
        {
            // Invalid prefix letter
            return false;
        }
    }
}


/**
 * Get an attribute by name.
 * @param name Name to search far.
 * @return Attribute or nullptr if none.
 */
std::shared_ptr<Attribute> Component::GetAttribute(const wstring& name)
{
    for(auto attribute: mAttributes)
    {
        if(attribute->GetName() == name)
        {
            return attribute;
        }
    }

    return nullptr;
}


/**
 * Save component to an XML file.
 * @param node
 */
void Component::XmlSave(wxXmlNode* node)
{
    auto componentNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"component");
    node->AddChild(componentNode);

    componentNode->AddAttribute(L"part", mPart->GetName());
    componentNode->AddAttribute(L"number", GetNumber());

    for(auto attribute: mAttributes)
    {
        // We do not save the number as an attribute, since
        // it is provided on the component tag.
        if(attribute->GetName() != L"Number")
        {
            attribute->XmlSave(componentNode);
        }
    }
}

/**
 * Load a component from XML
 * @param node XML node to load the component from
 */
void Component::XmlLoad(wxXmlNode* node, Parts *parts)
{
    auto partName = node->GetAttribute(L"part");
    mPart = parts->Get(partName);
    SetNumber(node->GetAttribute(L"number").ToStdWstring());

    auto child = node->GetChildren();
    for( ; child; child=child->GetNext())
    {
        auto name = child->GetName();
        if(name == L"attribute")
        {
            auto name = child->GetAttribute(L"name");
            auto attr = GetAttribute(name);
            if(attr != nullptr)
            {
                attr->XmlLoad(child);
            }
            else
            {
                attr = std::make_shared<Attribute>();
                attr->XmlLoad(child);
            }
        }
    }

}

/**
 * Get the layout for the component
 * @return Layout pointer or nullptr if none provided.
 */
std::shared_ptr<Layout> Component::GetLayout()
{
    if(mPart == nullptr)
    {
        return nullptr;
    }

    return mPart->GetLayout();
}
