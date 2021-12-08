/**
 * @file Schematic.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Schematic.h"


bool Schematic::Load(const std::wstring& path)
{
    if(!EagleDOM::Load(path))
    {
        return false;
    }

    return true;
}

bool Schematic::SaveXml(const std::wstring& designPath, wxXmlNode* node)
{
    auto newNode = EagleDOM::SaveXml(designPath, node, L"sch");
    if(newNode == nullptr)
    {
        return true;
    }

    return true;
}

bool Schematic::LoadXml(wxWindow* parent, const std::wstring& designPath, wxXmlNode* root)
{
    auto node = EagleDOM::LoadXml(parent, designPath, root, L"sch");

    return true;
}