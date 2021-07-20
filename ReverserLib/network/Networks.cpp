/**
 * @file Networks.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"
#include <wx/xml/xml.h>

#include <sstream>
#include <iomanip>

#include "Networks.h"
#include "Network.h"


/**
 * Save the model to an XML file.
 * @param node XML node to save to.
 */
void Networks::XmlSave(wxXmlNode *node)
{
    auto networksNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"networks");
    node->AddChild(networksNode);

    for(auto network: mNetworks)
    {
        network->XmlSave(networksNode);
    }
}

/**
 * Load networks from XML file
 * @param node XML node to load from
 */
void Networks::XmlLoad(wxXmlNode* node)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"network")
        {
            auto network = std::make_shared<Network>();
            network->XmlLoad(child);
            Add(network);
        }
    }
}

std::wstring Networks::NextFreeName()
{
    int last = 0;

    // Iterate over the collection and find all components with
    // the prefix.
    for(auto network : mNetworks)
    {
        auto num = network->GetNumber();
        if(num > last)
        {
            last = num;
        }

    }

    std::wstringstream str;
    str << Network::Prefix << std::setw(3) << std::setfill(L'0') << (last + 1);

    return str.str();
}



std::shared_ptr<Network> Networks::Get(const std::wstring &name)
{
    for(auto network: mNetworks)
    {
        if(network->GetName() == name)
        {
            return network;
        }
    }

    return nullptr;
}

void Networks::Add(std::shared_ptr<Network> network)
{
    mNetworks.push_back(network);
}

