/**
 * @file Device.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Device.h"
#include "DeviceSet.h"
#include "Gate.h"
#include "Symbol.h"


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
            auto connect = std::make_shared<Connect>(child, this);
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

std::shared_ptr<Device::Connect> Device::ConnectForPad(const std::wstring& padName)
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

Device::Connect::Connect(wxXmlNode* node, Device* device) : mDevice(device)
{
    auto deviceSet = device->GetDeviceSet();

    auto gate = node->GetAttribute(L"gate");
    auto pin = node->GetAttribute(L"pin");
    mPadName = node->GetAttribute(L"pad");

    mGate = deviceSet->FindGate(gate.ToStdWstring());
    auto symbol = mGate->GetSymbol();
    if(symbol != nullptr)
    {
        mPin = symbol->FindPin(pin.ToStdWstring());
    }
}
