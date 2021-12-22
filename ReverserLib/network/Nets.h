/**
 * @file Nets.h
 * @author Charles Owen
 *
 * A collection of circuit networks
 */

#ifndef REVERSER_NETS_H
#define REVERSER_NETS_H

class Net;
class Parts;


/**
 * A collection of circuit networks
 */
class Nets {
private:
    void XmlSheet(wxXmlNode* node, Parts* parts);
    void Sort();

    std::vector<std::shared_ptr<Net>> mNets;

public:
    bool XmlLoad(wxXmlNode* root, Parts* parts);

    std::shared_ptr<Net> Find(const std::wstring& name);

    /**
     * Get an iterator for the beginning of the collection
     * @return Iter object at position 0
     */
    std::vector<std::shared_ptr<Net>>::iterator begin() { return mNets.begin(); }

    /**
     * Get an iterator for the end of the collection
     * @return Iter object at position past the end
     */
    std::vector<std::shared_ptr<Net>>::iterator end() { return mNets.end(); }
};

#endif //REVERSER_NETS_H
