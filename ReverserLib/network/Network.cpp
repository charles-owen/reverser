/**
 * @file Network.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"
#include <wx/xml/xml.h>

#include <regex>
#include <wchar.h>

#include "Network.h"

const std::wstring Network::Prefix = L"NET";

Network::Network()
{

}

/**
 * Save network to an XML file.
 * @param node
 */
void Network::XmlSave(wxXmlNode* node)
{
    auto networkNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"network");
    node->AddChild(networkNode);

    networkNode->AddAttribute(L"name", GetName());

//    for(auto attribute: mAttributes)
//    {
//        // We do not save the number as an attribute, since
//        // it is provided on the component tag.
//        if(attribute->GetName() != L"Number")
//        {
//            attribute->XmlSave(networkNode);
//        }
//    }
}

/**
 * Load a network from XML
 * @param node XML node to load the component from
 */
void Network::XmlLoad(wxXmlNode* node)
{
    SetName(node->GetAttribute(L"name").ToStdWstring());

//    auto child = node->GetChildren();
//    for( ; child; child=child->GetNext())
//    {
//        auto name = child->GetName();
//        if(name == L"attribute")
//        {
//            auto name = child->GetAttribute(L"name");
//            auto attr = GetAttribute(name);
//            if(attr != nullptr)
//            {
//                attr->XmlLoad(child);
//            }
//            else
//            {
//                attr = std::make_shared<Attribute>();
//                attr->XmlLoad(child);
//            }
//        }
//    }

}


/**
 * Get any network number.
 *
 * This only applies for networks with a name
 * in the format: NETxxx, where xxx is a number.
 *
 * @return Number or 0 if not in the network format.
 */
int Network::GetNumber()
{
    const std::wregex re(L"NET([0-9][0-9][0-9])");
    std::wsmatch matches;

    if(std::regex_match(mName, matches, re))
    {
        auto match = matches[1].str();
        return std::wcstol(match.c_str(), nullptr, 10);
    }

    return 0;
}
