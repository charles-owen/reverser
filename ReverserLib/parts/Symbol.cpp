/**
 * @file Symbol.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Symbol.h"
#include "Pin.h"
#include "../XmlHelper.h"

Symbol::Symbol(wxXmlNode* node, const std::wstring& libraryName) : LibraryItem(node, libraryName)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"pin")
        {
            mPins.push_back(std::make_shared<Pin>(child));
        }
    }
}

std::shared_ptr<Pin> Symbol::FindPin(const std::wstring& name)
{
    for(auto pin: mPins)
    {
        if(pin->GetName() == name)
        {
            return pin;
        }
    }
    return nullptr;
}
