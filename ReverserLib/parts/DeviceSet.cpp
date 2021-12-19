/**
 * @file DeviceSet.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "DeviceSet.h"
#include "Symbol.h"
#include "Symbols.h"
#include "Device.h"
#include "Gate.h"
#include "../XmlHelper.h"

DeviceSet::DeviceSet(wxXmlNode* node, const std::wstring& libraryName, Symbols* symbols) :
    LibraryItem(node, libraryName)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"gates")
        {
            XmlGates(child, symbols);
        }
        else if(child->GetName() == L"devices")
        {
            XmlDevices(child);
        }
    }
}

void DeviceSet::XmlGates(wxXmlNode* node, Symbols* symbols)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"gate")
        {
            mGates.push_back(std::make_shared<Gate>(child, GetLibrary(), symbols));
        }
    }
}

std::shared_ptr<Gate> DeviceSet::FindGate(const std::wstring& name)
{
    for(auto gate: mGates)
    {
        if(gate->GetName() == name)
        {
            return gate;
        }
    }

    return nullptr;
}


void DeviceSet::XmlDevices(wxXmlNode* node)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"device")
        {
            mDevices.push_back(std::make_shared<Device>(child, this));
        }
    }
}

std::shared_ptr<Device> DeviceSet::FindDevice(const std::wstring& name)
{
    for(auto device: mDevices)
    {
        if(device->GetName() == name)
        {
            return device;
        }
    }

    return nullptr;
}
