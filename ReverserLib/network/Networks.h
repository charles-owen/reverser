/**
 * @file Networks.h
 * @author Charles B. Owen
 *
 * Collection of circuit networks.
 *
 */

#ifndef REVERSER_NETWORKS_H
#define REVERSER_NETWORKS_H

#include <memory>
#include <string>
#include <vector>

class Network;

/**
 * Collection of circuit networks.
 */
class Networks
{
public:
    Networks()  {}

    std::wstring NextFreeName();
    std::shared_ptr<Network> Get(const std::wstring &name);

    void Add(std::shared_ptr<Network> network);
    void XmlSave(wxXmlNode *node);
    void XmlLoad(wxXmlNode *node);

private:

    std::vector<std::shared_ptr<Network>> mNetworks;

public:
    std::vector<std::shared_ptr<Network>>::iterator begin() { return mNetworks.begin(); }
    std::vector<std::shared_ptr<Network>>::iterator end() { return mNetworks.end(); }

};

#endif //REVERSER_NETWORKS_H
