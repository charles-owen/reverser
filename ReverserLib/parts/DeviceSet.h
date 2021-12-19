/**
 * @file DeviceSet.h
 * @author Charles Owen
 *
 * Devices are the possible schematic elements.
 * A device set connects the instance to a package and symbol.
 */

#ifndef REVERSER_DEVICESET_H
#define REVERSER_DEVICESET_H

#include "LibraryItem.h"

class Symbols;
class Symbol;
class Device;
class Gate;

/**
 * Devices are the possible schematic elements.
 * A device set connects the instance to a package and symbol.
 */
class DeviceSet : public LibraryItem {
private:
    void XmlDevices(wxXmlNode* node);
    void XmlGates(wxXmlNode* node, Symbols* symbols);

    std::vector<std::shared_ptr<Gate>> mGates;
    std::vector<std::shared_ptr<Device>> mDevices;

public:
    DeviceSet(wxXmlNode* node, const std::wstring& libraryName, Symbols* symbols);

    std::shared_ptr<Gate> FindGate(const std::wstring& name);
    std::shared_ptr<Device> FindDevice(const std::wstring& name);

};

#endif //REVERSER_DEVICESET_H
