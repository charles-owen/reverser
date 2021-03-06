/**
 * @file Part.h
 * @author Charles Owen
 *
 * A part is a component on the board
 */

#ifndef REVERSER_PART_H
#define REVERSER_PART_H

#include <utility>

class DeviceSets;
class DeviceSet;
class Device;
class Instance;
class Pin;

/**
 * A part is a component on the board
 */
class Part {
private:
    std::wstring mName;
    std::wstring mLibrary;
    std::wstring mValue;

    std::shared_ptr<DeviceSet> mDeviceSet;
    std::shared_ptr<Device> mDevice;

    std::vector<std::shared_ptr<Instance>> mInstances;

public:
    Part(wxXmlNode* node, DeviceSets* deviceSets);
    void AddInstance(wxXmlNode* node);

    auto GetName() const {return mName;}
    auto GetDevice() {return mDevice;}

    std::pair<std::shared_ptr<Instance>, std::shared_ptr<Pin>> FindInstanceForPad(const std::wstring& name);

    std::shared_ptr<Instance> FindInstanceForGate(const std::wstring& gateName);

    /**
     * Get an iterator for the beginning of the collection of instances
     * @return Iter object at position 0
     */
    auto begin() { return mInstances.begin(); }

    /**
     * Get an iterator for the end of the collection of instances
     * @return Iter object at position past the end
     */
    auto end() { return mInstances.end(); }
};

#endif //REVERSER_PART_H
