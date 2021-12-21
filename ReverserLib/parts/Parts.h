/**
 * @file Parts.h
 * @author Charles Owen
 *
 * Parts are the actual components.
 */

#ifndef REVERSER_PARTS_H
#define REVERSER_PARTS_H

class DeviceSets;
class Part;

/**
 * Parts are the actual components.
 */
class Parts {
private:

    std::vector<std::shared_ptr<Part>> mParts;

public:
    bool XmlLoad(wxXmlNode* root, DeviceSets* deviceSets);

    std::shared_ptr<Part> Find(const std::wstring& name);

    void XmlSheet(wxXmlNode* node);
};

#endif //REVERSER_PARTS_H
