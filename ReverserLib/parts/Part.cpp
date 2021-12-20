/**
 * @file Part.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Part.h"
#include "DeviceSets.h"
#include "DeviceSet.h"
#include "Instance.h"

// <part name="U2" library="owen-library"
// library_urn="urn:adsk.wipprod:fs.file:vf.frPKTRgnS7OtKRM0piDRaQ"
// deviceset="HD6821P" device="" value="HD6821P"/>

Part::Part(wxXmlNode* node, DeviceSets* deviceSets)
{
    mName = node->GetAttribute(L"name");
    mLibrary = node->GetAttribute(L"library");
    mValue = node->GetAttribute(L"value");

    auto deviceSetName = node->GetAttribute(L"deviceset");
    auto deviceName = node->GetAttribute(L"device");

    mDeviceSet = deviceSets->Find(mLibrary, deviceSetName.ToStdWstring());
    if(mDeviceSet != nullptr)
    {
        mDevice = mDeviceSet->FindDevice(deviceName.ToStdWstring());
    }
}

void Part::AddInstance(wxXmlNode* node)
{
    if(mDeviceSet != nullptr)
    {
        mInstances.push_back(std::make_shared<Instance>(node, this, mDeviceSet));
    }
}

/**
 * For a given pad name, find a part instance and the Pin for that part.
 * @param name Pad name
 * @return Pair consisting of instance and pin pointers
 */
std::pair<std::shared_ptr<Instance>, std::shared_ptr<Pin>> Part::FindInstanceForPad(const std::wstring& name)
{
    for(auto instance: mInstances)
    {
        auto pin = instance->FindPinForPad(name);
        if(pin != nullptr)
        {
            return std::pair<std::shared_ptr<Instance>, std::shared_ptr<Pin>>(instance, pin);
        }
    }

    return std::pair<std::shared_ptr<Instance>, std::shared_ptr<Pin>>();
}
