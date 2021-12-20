/**
 * @file Instance.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Instance.h"
#include "DeviceSet.h"
#include "Part.h"
#include "Device.h"
#include "../XmlHelper.h"

Instance::Instance(wxXmlNode* node, Part* part, std::shared_ptr<DeviceSet>  deviceSet) :
    mPart(part)
{
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);
    mRot = node->GetAttribute(L"rot");

    auto gateName = node->GetAttribute(L"gate");
    mGate = deviceSet->FindGate(gateName.ToStdWstring());
}

std::shared_ptr<Pin> Instance::FindPinForPad(const std::wstring& name)
{
    auto device = mPart->GetDevice();
    if(device != nullptr)
    {
        auto connect = device->ConnectForPad(name);
        if(connect != nullptr && connect->GetGate() == mGate)
        {
            return connect->GetPin();
        }
    }

    return nullptr;
}
