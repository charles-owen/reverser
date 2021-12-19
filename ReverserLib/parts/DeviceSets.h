/**
 * @file DeviceSets.h
 * @author Charles Owen
 *
 * Devices are the possible schematic elements.
 * A device set connects the instance to a package and symbol.
 */

#ifndef REVERSER_DEVICESETS_H
#define REVERSER_DEVICESETS_H

class Symbols;
class DeviceSet;

/**
 * Devices are the possible schematic elements.
 * A device set connects the instance to a package and symbol.
 */
class DeviceSets {
private:
    void XmlLibrary(wxXmlNode* node);

    void XmlDeviceSets(wxXmlNode* node, std::wstring& libraryName);

    Symbols* mSymbols = nullptr;

    std::vector<std::shared_ptr<DeviceSet>> mDeviceSets;

public:
    bool XmlLoad(wxXmlNode* node, Symbols* symbols);

    std::shared_ptr<DeviceSet> Find(const std::wstring& libraryName, const std::wstring& name);
};

#endif //REVERSER_DEVICESETS_H
