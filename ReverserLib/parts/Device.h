/**
 * @file Device.h
 * @author Charles Owen
 *
 * A device is a single schematic item such as a gate or other symbol.
 * A package/part can have multiple devices
 */

#ifndef REVERSER_DEVICE_H
#define REVERSER_DEVICE_H

class Package;
class DeviceSet;
class Gate;
class Pin;
class DeviceConnect;

/**
 * A device is a single schematic item such as a gate or other symbol.
 * A package/part can have multiple devices
 */
class Device {
public:


private:
    void XmlConnects(wxXmlNode* node);

    DeviceSet* mDeviceSet;
    std::wstring mName;
    std::wstring mPackageName;
    std::shared_ptr<Package> mPackage;

    std::vector<std::shared_ptr<DeviceConnect>> mConnects;

public:
    Device(wxXmlNode* node, DeviceSet* deviceSet);

    auto GetDeviceSet() {return mDeviceSet;}
    auto GetName() const {return mName;}
    auto GetPackageName() const {return mPackageName;}


    std::shared_ptr<Gate> GateForPad(const std::wstring& padName);
    std::shared_ptr<DeviceConnect> ConnectForPad(const std::wstring& padName);
    std::shared_ptr<Pin> PinForPad(const std::wstring& padName);
    std::shared_ptr<Pin> GetPin(const std::wstring& pinName);
    std::wstring PadForPin(const std::wstring& pinName);
};

#endif //REVERSER_DEVICE_H
