/**
 * @file Device.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Device.h"
#include "DeviceConnect.h"
#include "DeviceSet.h"
#include "Gate.h"
#include "Symbol.h"
#include "Pin.h"

Device::Device(wxXmlNode* node, DeviceSet* deviceSet) : mDeviceSet(deviceSet)
{
    mName = node->GetAttribute(L"name");
    mPackageName = node->GetAttribute(L"package");

    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"connects")
        {
            XmlConnects(child);
        }
    }
}

void Device::XmlConnects(wxXmlNode* node)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"connect")
        {
            auto connect = std::make_shared<DeviceConnect>(child, this);
            mConnects.push_back(connect);
        }
    }
}

std::shared_ptr<Gate> Device::GateForPad(const std::wstring& padName)
{
    for(auto connect: mConnects)
    {
        if(connect->GetPadName() == padName)
        {
            return connect->GetGate();
        }
    }

    return nullptr;
}

std::shared_ptr<Pin> Device::PinForPad(const std::wstring& padName)
{
    for(auto connect: mConnects)
    {
        if(connect->GetPadName() == padName)
        {
            return connect->GetPin();
        }
    }

    return nullptr;
}

std::shared_ptr<DeviceConnect> Device::ConnectForPad(const std::wstring& padName)
{
    for(auto connect: mConnects)
    {
        if(connect->GetPadName() == padName)
        {
            return connect;
        }
    }

    return nullptr;
}

std::shared_ptr<Pin> Device::GetPin(const std::wstring& pinName)
{
    for(auto connect: mConnects)
    {
        auto pin = connect->GetPin();
        if(pin != nullptr && pin->GetName() == pinName)
        {
            return pin;
        }
    }

    return nullptr;
}

std::wstring Device::PadForPin(const std::wstring& pinName)
{
    for(auto connect: mConnects)
    {
        auto pin = connect->GetPin();
        if(pin != nullptr && pin->GetName() == pinName)
        {
            return connect->GetPadName();
        }
    }

    return L"";
}

