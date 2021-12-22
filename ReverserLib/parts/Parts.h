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

    /**
     * Get an iterator for the beginning of the collection
     * @return Iter object at position 0
     */
    std::vector<std::shared_ptr<Part>>::iterator begin() { return mParts.begin(); }

    /**
     * Get an iterator for the end of the collection
     * @return Iter object at position past the end
     */
    std::vector<std::shared_ptr<Part>>::iterator end() { return mParts.end(); }
};

#endif //REVERSER_PARTS_H
