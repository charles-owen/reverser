/**
 * @file Elements.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Elements.h"
#include "Element.h"
#include "../XmlHelper.h"

bool Elements::XmlLoad(wxXmlNode* root, Packages* packages)
{
    // <root><drawing><board><libraries>
    auto elements = XmlHelper::Find(root, L"drawing/board/elements");
    if(elements == nullptr)
    {
        return false;
    }

    auto child = elements->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"element")
        {
            auto element = std::make_shared<Element>(child, packages);
            mElements.push_back(element);
        }
    }

    return true;
}

std::shared_ptr<Element> Elements::Find(const std::wstring& name)
{
    for(auto element: mElements)
    {
        if(element->GetName() == name)
        {
            return element;
        }
    }

    return nullptr;
}

void Elements::Draw(wxGraphicsContext* graphics, int pcbWidth, int pcbHeight)
{
    for(auto element: mElements)
    {
        element->Draw(graphics, pcbWidth, pcbHeight);
    }
}
