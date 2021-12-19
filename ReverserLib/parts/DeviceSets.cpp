/**
 * @file DeviceSets.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "DeviceSets.h"
#include "DeviceSet.h"
#include "../XmlHelper.h"

bool DeviceSets::XmlLoad(wxXmlNode* root, Symbols* symbols)
{
    mSymbols = symbols;

    // <root><drawing><schematic><libraries>
    auto libraries = XmlHelper::Find(root, L"drawing/schematic/libraries");
    if(libraries == nullptr)
    {
        return false;
    }

    auto child = libraries->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"library")
        {
            XmlLibrary(child);
        }
    }

    return true;
}


void DeviceSets::XmlLibrary(wxXmlNode* node)
{
    std::wstring libraryName = node->GetAttribute(L"name", L"").ToStdWstring();
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"devicesets")
        {
            XmlDeviceSets(child, libraryName);
        }
    }
}

void DeviceSets::XmlDeviceSets(wxXmlNode* node, std::wstring& libraryName)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"deviceset")
        {
            auto deviceSet = std::make_shared<DeviceSet>(child, libraryName, mSymbols);
            mDeviceSets.push_back(deviceSet);
        }
    }
}

std::shared_ptr<DeviceSet> DeviceSets::Find(const std::wstring& libraryName, const std::wstring& name)
{
    for(auto deviceSet: mDeviceSets)
    {
        if(deviceSet->IsItem(libraryName, name))
        {
            return deviceSet;
        }
    }

    return nullptr;
}
