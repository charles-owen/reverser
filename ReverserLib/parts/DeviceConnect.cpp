/**
 * @file DeviceConnect.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "DeviceConnect.h"
#include "DeviceSet.h"
#include "Device.h"
#include "Gate.h"
#include "Symbol.h"
#include "Pin.h"

DeviceConnect::DeviceConnect(wxXmlNode* node, Device* device) :mDevice(device)
{
    auto deviceSet = device->GetDeviceSet();

    auto gate = node->GetAttribute(L"gate");
    auto pin = node->GetAttribute(L"pin");
    mPadName = node->GetAttribute(L"pad");

    mGate = deviceSet->FindGate(gate.ToStdWstring());
    mGate->AddConnect(this);

    auto symbol = mGate->GetSymbol();
    if(symbol != nullptr)
    {
        mPin = symbol->FindPin(pin.ToStdWstring());
    }
}
