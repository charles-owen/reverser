/**
 * @file Instance.h
 * @author Charles Owen
 *
 * An instance is one component of a part on the schematic.
 */

#ifndef REVERSER_INSTANCE_H
#define REVERSER_INSTANCE_H

class Gate;
class DeviceSet;
class Pin;
class Part;

/**
 * An instance is one component of a part on the schematic.
 */
class Instance {
private:

    std::shared_ptr<Gate> mGate;
    double mX;
    double mY;
    std::wstring mRot;
    Part* mPart;

public:
    Instance(wxXmlNode* node, Part* part, std::shared_ptr<DeviceSet> deviceSet);

    std::shared_ptr<Pin> FindPinForPad(const std::wstring& name);

    auto GetGate() {return mGate;}
};

#endif //REVERSER_INSTANCE_H
