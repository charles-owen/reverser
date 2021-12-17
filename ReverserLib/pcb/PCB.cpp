
#include "../pch.h"

#include <wx/xml/xml.h>

#include "PCB.h"
#include "Layer.h"
#include "../design/Design.h"
//#include "../components/Components.h"
//#include "../components/LayoutComponent.h"
#include "../XmlHelper.h"

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
 * @param designPath Path to the design file.
 * @param node XML node to save to
 */
void PCB::XmlSave(const std::wstring& designPath, wxXmlNode* node)
{
    auto pcbNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"pcb");
    pcbNode->AddAttribute(L"width", wxString::Format(wxT("%.1f"), mWidth));
    pcbNode->AddAttribute(L"height", wxString::Format(wxT("%.1f"), mHeight));
    node->AddChild(pcbNode);

    auto topNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"top");
    pcbNode->AddChild(topNode);
    mTop->XmlSave(designPath, topNode);

    auto bottomNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"bot");
    pcbNode->AddChild(bottomNode);
    mBottom->XmlSave(designPath, bottomNode);
}

/**
 *  EagleLoad PCB from an XML node
 * @param parent
 * @param designPath
 * @param root  XML node to load from
 */
void PCB::XmlLoad(wxWindow* parent, std::wstring& designPath, wxXmlNode* root)
{
    auto node = XmlHelper::Find(root, L"pcb");

    auto width = node->GetAttribute(L"width", L"150.0");
    width.ToDouble(&mWidth);

    auto height = node->GetAttribute(L"height", L"150.0");
    height.ToDouble(&mHeight);

    for(auto child = node->GetChildren(); child; child=child->GetNext())
    {
        auto name = child->GetName();

        if(name == L"top")
        {
            mTop->XmlLoad(parent, designPath, child);
        }
        else if(name == L"bot")
        {
            mBottom->XmlLoad(parent, designPath, child);
        }

    }
}


