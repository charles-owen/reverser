/**
 * @file XmlHelper.cpp
 * @author Charles B. Owen
 */

#include "XmlHelper.h"
#include <iostream>

wxXmlNode *XmlHelper::XmlFindChild(wxXmlNode* node, const std::wstring& name)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == name)
        {
            return child;
        }
    }

    return nullptr;
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
    node->AddAttribute(attrName, str);
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

