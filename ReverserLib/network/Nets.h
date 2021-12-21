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

    std::vector<std::shared_ptr<Net>> mNets;

public:
    bool XmlLoad(wxXmlNode* root, Parts* parts);

    std::shared_ptr<Net> Find(const std::wstring& name);
};

#endif //REVERSER_NETS_H
