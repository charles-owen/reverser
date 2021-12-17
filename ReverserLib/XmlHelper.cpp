/**
 * @file XmlHelper.cpp
 * @author Charles B. Owen
 */

#include "XmlHelper.h"
#include <iostream>
#include <sstream>

/**
 * Find a decendant node based on a path.
 * Paths are of the form "node/node/node"
 * @param node Parent node we are searching
 * @param nodePath Path to the desired node
 * @return wxXmlNode or nullptr if not found
 */
wxXmlNode *XmlHelper::Find(wxXmlNode* node, const std::wstring& nodePath)
{
    std::vector<std::wstring> nodeNames;
    std::wstringstream wss(nodePath);
    std::wstring part;
    while(std::getline(wss, part, L'/')) {
        nodeNames.push_back(part);
    }

    for(auto &nodeName : nodeNames)
    {
        bool found = false;
        auto child = node->GetChildren();
        for( ; child; child = child->GetNext())
        {
            if(child->GetName() == nodeName)
            {
                found = true;
                node = child;
            }
        }

        if(!found)
        {
            return nullptr;
        }
    }

    return node;
}





double XmlHelper::GetAttributeDouble(wxXmlNode* node, wxString attrName, double defaultVal)
{
    auto value = node->GetAttribute(attrName, L"");
    if(value == L"")
    {
        return defaultVal;
    }

    double d;
    value.ToDouble(&d);
    return d;
}


int XmlHelper::GetAttributeInt(wxXmlNode* node, wxString attrName, int defaultVal)
{
    auto value = node->GetAttribute(attrName, L"");
    if(value == L"")
    {
        return defaultVal;
    }

    return wxAtoi(value);
}

void XmlHelper::SetAttributeDouble(wxXmlNode* node, wxString attrName, double attrValue)
{
    wxString str;
    str << attrValue;

    // Does the attribute already exist?
    auto attribute = FindAttribute(node, attrName);
    if(attribute != nullptr)
    {
        attribute->SetValue(str);
    }
    else
    {
        node->AddAttribute(attrName, str);
    }
}


bool XmlHelper::GetAttributeBool(wxXmlNode* node, wxString attrName, bool defaultVal)
{
    auto value = node->GetAttribute(attrName, L"");
    if(value.IsEmpty())
    {
        return defaultVal;
    }

    return value == L"true";
}

wxXmlAttribute* XmlHelper::FindAttribute(wxXmlNode* node, wxString attrName)
{
    auto attribute = node->GetAttributes();
    for( ; attribute != nullptr; attribute = attribute->GetNext())
    {
        if(attribute->GetName() == attrName)
        {
            return attribute;
        }
    }

    return nullptr;
}


