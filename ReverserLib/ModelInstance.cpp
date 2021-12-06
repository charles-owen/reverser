/**
 * @file PCB.cpp
 */

#include "pch.h"

#include <memory>
#include <wx/xml/xml.h>

#include "Reverser.h"
#include "ModelInstance.h"
#include "pcb/PCB.h"
#include "components/Components.h"
#include "network/Networks.h"

/**
 * Constructor
 * @param reverser The Reverser system class
 */
ModelInstance::ModelInstance(Reverser* reverser, Design *model) : mReverser(reverser)
{
    mPCB = std::make_shared<PCB>(reverser, model);
    mComponents = std::make_shared<Components>();
    mNetworks = std::make_shared<Networks>();
}


/**
 * Save the model to an XML file.
 * @param node XML node to save to.
 */
void ModelInstance::XmlSave(wxXmlNode *node)
{
    mComponents->XmlSave(node);
    mNetworks->XmlSave(node);
    mPCB->XmlSave(node);
}

/**
 * Load the model from an XML file
 * @param node XML node to load from
 */
void ModelInstance::XmlLoad(wxXmlNode* node)
{
    auto child = node->GetChildren();
    for( ; child; child=child->GetNext())
    {
        auto name = child->GetName();

        if(name == L"pcb")
        {
            mPCB->XmlLoad(child);
        }
        else if(name == L"components")
        {
            mComponents->XmlLoad(child, mReverser->GetParts());
        }
        else if(name == L"networks")
        {
            mNetworks->XmlLoad(child);
        }
    }
}

void ModelInstance::Delete(std::shared_ptr<Component> component)
{
    mComponents->Delete(component);
    mPCB->Delete(component);
}
