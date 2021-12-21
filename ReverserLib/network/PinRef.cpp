/**
 * @file PinRef.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "PinRef.h"
#include "../parts/Parts.h"
#include "../parts/Part.h"
#include "../parts/Device.h"

PinRef::PinRef(wxXmlNode* node, Parts* parts)
{
    auto partName = node->GetAttribute(L"part");
    auto gateName = node->GetAttribute(L"gate");
    auto pinName = node->GetAttribute(L"pin");

    mPart = parts->Find(partName.ToStdWstring());
    mInstance = mPart->FindInstanceForGate(gateName.ToStdWstring());
    auto device = mPart->GetDevice();
    mPin = device->GetPin(pinName.ToStdWstring());
    mPadName = device->PadForPin(pinName.ToStdWstring());
}
