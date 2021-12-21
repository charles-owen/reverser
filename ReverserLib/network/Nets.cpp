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

std::shared_ptr<Net> Nets::Find(const std::wstring& name)
{
    auto i = std::find_if(mNets.begin(), mNets.end(),
            [&name](const std::shared_ptr<Net>& x) { return x->GetName() == name;});

    return i != mNets.end() ? *i : nullptr;
}

