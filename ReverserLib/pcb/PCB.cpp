
#include "../pch.h"

#include <wx/xml/xml.h>

#include "PCB.h"
#include "Layer.h"
#include "../design/Design.h"
//#include "../components/Components.h"
//#include "../components/LayoutComponent.h"

/**
 * Constructor
 * @param reverser
 * @param model
 */
PCB::PCB(Reverser* reverser, Design* model) : mReverser(reverser), mModel(model)
{
    mTop = std::make_shared<Layer>(this);
    mBottom = std::make_shared<Layer>(this);
}



double PCB::GetWidth() const
{
    return mWidth;
}
void PCB::SetWidth(double mWidth)
{
    PCB::mWidth = mWidth;
}
double PCB::GetHeight() const
{
    return mHeight;
}
void PCB::SetHeight(double mHeight)
{
    PCB::mHeight = mHeight;
}

/**
 * Save PCB to an XML node
 * @param node XML node to save to
 */
void PCB::XmlSave(wxXmlNode* node)
{
//    auto pcbNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"pcb");
//    pcbNode->AddAttribute(L"width", wxString::Format(wxT("%.1f"), mWidth));
//    pcbNode->AddAttribute(L"height", wxString::Format(wxT("%.1f"), mHeight));
//    node->AddChild(pcbNode);
//
//    auto topNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"top");
//    pcbNode->AddChild(topNode);
//    mTop->XmlSave(topNode);
//
//    auto bottomNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"bot");
//    pcbNode->AddChild(bottomNode);
//    mBottom->XmlSave(bottomNode);
//
//    for(auto component: mComponents)
//    {
//        component->XmlSave(pcbNode);
//    }
}

/**
 * Load PCM from an XML node
 * @param node XML node to load from
 */
void PCB::XmlLoad(wxXmlNode* node)
{
//    auto width = node->GetAttribute(L"width", L"150.0");
//    width.ToDouble(&mWidth);
//
//    auto height = node->GetAttribute(L"height", L"150.0");
//    height.ToDouble(&mHeight);
//
//    for(auto child = node->GetChildren(); child; child=child->GetNext())
//    {
//        auto name = child->GetName();
//
//        if(name == L"top")
//        {
//            mTop->XmlLoad(child);
//        }
//        else if(name == L"bot")
//        {
//            mBottom->XmlLoad(child);
//        }
//        else if(name == L"component")
//        {
//            XmlLoadComponent(child);
//        }
//    }
}

void PCB::XmlLoadComponent(wxXmlNode *node)
{
//    auto number = node->GetAttribute(L"number");
//    auto component = mModel->GetComponents()->Get(number.ToStdWstring());
//
//    if(component != nullptr)
//    {
//        auto layoutComponent = std::make_shared<LayoutComponent>();
//        layoutComponent->SetComponent(component);
//        layoutComponent->XmlLoad(node);
//
//        mComponents.push_back(layoutComponent);
//    }
}

/**
 * Draw the components over the printed circuit board.
 * @param graphics Graphics context to draw on
 */
void PCB::DrawComponents(PCBContext *context, wxGraphicsContext* graphics)
{
//    for(auto component : mComponents)
//    {
//        component->Draw(context, graphics);
//    }
}

/**
 * Handle mouse clicks (mouse down)
 * @param context PCB editor context.
 */
bool PCB::Click(PCBContext* context, const wxPoint2DDouble &point)
{
//    for(auto component : mComponents)
//    {
//        if(component->Click(context, point))
//        {
//            return true;
//        }
//    }

    return false;
}


/**
 * Delete a component
 * @param component Component to delete.
 */
void PCB::Delete(std::shared_ptr<Component> component)
{
//    for(auto c=mComponents.begin(); c!=mComponents.end(); c++)
//    {
//        if((*c)->GetComponent() == component)
//        {
//            mComponents.erase(c);
//            return;
//        }
//    }
}

