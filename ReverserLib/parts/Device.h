/**
 * @file Device.h
 * @author Charles Owen
 *
 * A device is a single schematic item such as a gate or other symbol.
 * A package can have multiple devices
 */

#ifndef REVERSER_DEVICE_H
#define REVERSER_DEVICE_H

class Package;
class DeviceSet;
class Gate;
class Pin;

class Device {
public:
    class Connect {
    private:
        Device* mDevice;
        std::wstring mPadName;
        std::shared_ptr<Gate> mGate;
        std::shared_ptr<Pin> mPin;

    public:
        Connect(wxXmlNode* node, Device* device);

        auto GetPadName() const {return mPadName;}
        auto GetGate() {return mGate;}
    };

private:
    DeviceSet* mDeviceSet;
    std::wstring mName;
    std::wstring mPackageName;
    std::shared_ptr<Package> mPackage;

    std::vector<std::shared_ptr<Connect>> mConnects;

public:
    Device(wxXmlNode* node, DeviceSet* deviceSet);

    auto GetDeviceSet() {return mDeviceSet;}

    auto GetName() const {return mName;}

    void XmlConnects(wxXmlNode* node);

    std::shared_ptr<Gate> GateForPad(const std::wstring& padName);
};

#endif //REVERSER_DEVICE_H
