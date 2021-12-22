/**
 * @file Nets.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Nets.h"
#include "Net.h"
#include "../XmlHelper.h"
#include "../save/Parts.h"

bool Nets::XmlLoad(wxXmlNode* root, Parts* parts)
{
    // <root><drawing><schematic><sheets>
    auto sheets = XmlHelper::Find(root, L"drawing/schematic/sheets");
    auto child = sheets->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"sheet")
        {
            XmlSheet(child, parts);
        }
    }

    Sort();
    return true;
}


void Nets::XmlSheet(wxXmlNode* node, Parts* parts)
{
    auto nets = XmlHelper::Find(node, L"nets");
    auto child = nets->GetChildren();
    for( ; child; child = child->GetNext())
    {
        auto name = child->GetName();
        if(child->GetName() == L"net")
        {
            auto net = std::make_shared<Net>(child, parts);
            mNets.push_back(net);
        }
    }
}

/**
 * Find a network by name.
 * @param name Name of the network to find
 * @return Pointer to found network or empty pointer if not found
 */
std::shared_ptr<Net> Nets::Find(const std::wstring& name)
{
    auto lb = std::lower_bound(mNets.begin(), mNets.end(), name,
            [](const std::shared_ptr<Net>& a, const std::wstring& name)
            {
                return a->GetName().compare(name) < 0;
            });

    return (lb != mNets.end() && (*lb)->GetName() == name) ? *lb : nullptr;
}

void Nets::Sort()
{
    std::sort(mNets.begin(), mNets.end(),
            [](const std::shared_ptr<Net>& a, const std::shared_ptr<Net>& b)
            {
                return a->GetName().compare(b->GetName()) < 0;
            });
}