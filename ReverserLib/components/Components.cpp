/**
 * @file Components.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include <sstream>
#include <wx/xml/xml.h>

#include "Components.h"
#include "Component.h"


std::shared_ptr<Component> Components::Get(const std::wstring &number)
{
    for(auto component: mComponents)
    {
        if(component->GetNumber() == number)
        {
            return component;
        }
    }

    return nullptr;
}

/**
 * Get the next free component number for a given prefix.
 * @param prefix Prefix string, like Q or JP
 * @return Component number that is free.
 */
std::wstring Components::NextFree(const std::wstring& prefix)
{
    int last = 0;

    // Iterate over the collection and find all components with
    // the prefix.
    for(auto component: mComponents)
    {
        if(component->GetPrefix() == prefix)
        {
            auto num = component->GetNumberNumber();
            if(num > last)
            {
                last = num;
            }
        }

    }

    std::wstringstream str;
    str << prefix << (last + 1);

    return str.str();
}

void Components::Add(std::shared_ptr<Component> component)
{
    mComponents.push_back(component);
}

/**
 * Save components to an XML file.
 * @param node XML node to save to
 */
void Components::XmlSave(wxXmlNode* node)
{
    auto componentsNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"components");
    node->AddChild(componentsNode);

    for(auto component: mComponents)
    {
        component->XmlSave(componentsNode);
    }
}

/**
 * Load components from XML file
 * @param node XML node to load from
 */
void Components::XmlLoad(wxXmlNode* node, Parts *parts)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"component")
        {
            auto component = std::make_shared<Component>();
            component->XmlLoad(child, parts);
            Add(component);
        }
    }
}

/**
 * Delete a component
 * @param component Component to delete.
 */
void Components::Delete(std::shared_ptr<Component> component)
{
    for(auto c=mComponents.begin(); c!=mComponents.end(); c++)
    {
        if(*c == component)
        {
            mComponents.erase(c);
            return;
        }
    }
}
