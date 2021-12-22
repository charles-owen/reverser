/**
 * @file DeviceConnect.h
 * @author Charles Owen
 *
 * Represents the connection between a device, gate, pin, and pad
 */

#ifndef REVERSER_DEVICECONNECT_H
#define REVERSER_DEVICECONNECT_H

class Device;
class Gate;
class Pin;

/**
 * Represents the connection between a device, gate, pin, and pad
 */
class DeviceConnect {
private:
    Device* mDevice;
    std::wstring mPadName;
    std::shared_ptr<Gate> mGate;
    std::shared_ptr<Pin> mPin;

public:
    DeviceConnect(wxXmlNode* node, Device* device);

    auto GetPadName() const {return mPadName;}
    auto GetGate() {return mGate;}
    auto GetPin() {return mPin;}
};

#endif //REVERSER_DEVICECONNECT_H
