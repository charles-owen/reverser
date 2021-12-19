/**
 * @file Schematic.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Schematic.h"


bool Schematic::EagleLoad(const std::wstring& path)
{
    if(!EagleDOM::EagleLoad(path))
    {
        return false;
    }

    return true;
}

bool Schematic::XmlSave(const std::wstring& designPath, wxXmlNode* node)
{
    auto newNode = EagleDOM::XmlSave(designPath, node, L"sch");
    if(newNode == nullptr)
    {
        return true;
    }

    return true;
}

bool Schematic::XmlLoad(wxWindow* parent, const std::wstring& designPath, wxXmlNode* node)
{
    EagleDOM::XmlLoad(parent, designPath, node, L"sch");

    return true;
}

void Schematic::XmlParse(wxXmlNode* root)
{
    mSymbols.XmlLoad(root);
}
