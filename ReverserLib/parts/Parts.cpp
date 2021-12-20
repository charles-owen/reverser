/**
 * @file Parts.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Parts.h"
#include "Part.h"
#include "../XmlHelper.h"


bool Parts::XmlLoad(wxXmlNode* root, DeviceSets* deviceSets)
{
    // <root><drawing><schematic><parts>
    auto parts = XmlHelper::Find(root, L"drawing/schematic/parts");
    if(parts == nullptr)
    {
        return false;
    }

    auto child = parts->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"part")
        {
            mParts.push_back(std::make_shared<Part>(child, deviceSets));
        }
    }

    // <root><drawing><schematic><sheets>
    auto sheets = XmlHelper::Find(root, L"drawing/schematic/sheets");
    child = sheets->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"sheet")
        {
            XmlSheet(child);
        }
    }

    return true;
}

void Parts::XmlSheet(wxXmlNode* node)
{
    auto instances = XmlHelper::Find(node, L"instances");
    auto child = instances->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"instance")
        {
            auto partName = child->GetAttribute(L"part");
            auto part = Find(partName.ToStdWstring());
            if(part != nullptr)
            {
                part->AddInstance(child);
            }
        }
    }
}

std::shared_ptr<Part> Parts::Find(const std::wstring& name)
{
    for(auto part: mParts)
    {
        if(part->GetName() == name)
        {
            return part;
        }
    }

    return nullptr;
}
