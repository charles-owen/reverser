/**
 * @file LayoutComponent.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include <wx/graphics.h>

#include "LayoutComponent.h"
#include "../pcb/PCBContext.h"

#include "Component.h"
#include "Layout.h"
#include "Attribute.h"


/**
 * Handle mouse clicks (mouse down)
 * @param context PCB editor context.
 */
bool LayoutComponent::Click(PCBContext* context, const wxPoint2DDouble &point)
{
    auto local = mPlacement.ToLocal(point);

    for(auto attribute : mAttributes)
    {
        if(attribute->Click(context, local))
        {
            return true;
        }
    }

    for(auto pin : mPins)
    {
        if(pin->Click(context, local))
        {
            return true;
        }
    }

    return false;
}


void LayoutComponent::Move(const wxPoint2DDouble& delta)
{
    mPlacement.Move(delta);
}


void LayoutComponent::Rotate(double angle)
{
    mPlacement.Rotate(angle);
}


/**
 * Draw the layout component
 * @param context The PCB editing context
 * @param graphics The graphics context for rendering
 */
void LayoutComponent::Draw(PCBContext* context, wxGraphicsContext *graphics)
{

    graphics->SetPen(wxNullPen);

    mPlacement.Apply(graphics);

    //
    // Draw the pins
    //
    for(auto pin: mPins)
    {
        pin->Draw(context, graphics);
    }

    //
    // Draw the cross-hair
    //
    double size = 30;

    graphics->SetPen(*wxRED_PEN);

    graphics->PushState();
    graphics->Scale(0.1, 0.1);

    graphics->StrokeLine(-size/2, 0, size/2, 0);
    graphics->StrokeLine(0, -size/2, 0, size/2);

    //
    // Draw any drawable symbol
    //
    auto layout = mComponent->GetLayout();
    if(layout != nullptr)
    {
        layout->GetDrawable()->Draw(graphics);
    }

    //
    // Draw the attributes
    //
    wxFont font(wxFontInfo(25).Family(wxFONTFAMILY_SWISS));
    graphics->SetFont(font, *wxWHITE);

    for(auto attribute : mAttributes)
    {
        attribute->Draw(context, graphics);
    }

    graphics->PopState();
    mPlacement.UnApply(graphics);
}

/**
 * Set the component.
 *
 * This function makes the connections from this object to
 * the underlying component object including setting up the
 * pins and attributs.
 *
 * @param component
 */
void LayoutComponent::SetComponent(std::shared_ptr<Component> component)
{
    mComponent = component;

    for(auto attribute : component->GetAttributes())
    {
        mAttributes.push_back(std::make_shared<Attribute>(this, attribute));
    }

    auto layout = component->GetLayout();
    if(layout == nullptr)
    {
        return;
    }

    for(auto pin : *layout)
    {
        mPins.push_back(std::make_shared<Pin>(this, pin));
    }
}

std::shared_ptr<LayoutComponent::Attribute> LayoutComponent::GetAttribute(std::wstring name)
{
    for(auto attribute : mAttributes)
    {
        if(attribute->GetName() == name)
        {
            return attribute;
        }
    }

    return nullptr;
}




void LayoutComponent::Pin::Draw(PCBContext* context, wxGraphicsContext* graphics)
{
    if(context->IsSelected(this))
    {
        graphics->SetBrush(wxColour(255, 87, 87));
    }
    else if(context->IsSelected(mComponent))
    {
        graphics->SetBrush(wxColour(255, 115, 115));
    }
    else
    {
        graphics->SetBrush(*wxCYAN_BRUSH);
    }

    auto x = mPin->GetX();
    auto y = mPin->GetY();
    auto d = mPin->GetDiameter();
    auto r = d / 2;

    graphics->DrawEllipse(x-r, y-r, d, d);

}

bool LayoutComponent::Pin::Click(PCBContext* context, const wxPoint2DDouble& point)
{
    auto x = point.m_x - mPin->GetX();
    auto y = point.m_y - mPin->GetY();
    auto r = sqrt(x * x + y * y);
    if(r < (mPin->GetDiameter() / 2))
    {
        // We clicked on this pin!
        context->Clicked(mComponent, this);
        return true;
    }

    return false;
}

void LayoutComponent::Attribute::Draw(PCBContext* context, wxGraphicsContext* graphics)
{
    auto name = mAttribute->GetName();
    if(name == L"Value" && !context->ShowValues())
    {
        return;
    }

    mPlacement.Apply(graphics);

    auto value = mAttribute->GetValue();
    graphics->DrawText(value, 0, 0);

    mPlacement.UnApply(graphics);
}

bool LayoutComponent::Attribute::Click(PCBContext* context, const wxPoint2DDouble& point)
{
    wxPoint2DDouble point10(point.m_x * 10, point.m_y * 10);
    auto local = mPlacement.ToLocal(point10);
    auto x = local.m_x;
    auto y = local.m_y;
    if(x >= 0 && y >= 0 && x < 40 && y < 40)
    {
        context->Clicked(mComponent, this);
        return true;
    }

    return false;
}


void LayoutComponent::Attribute::Move(const wxPoint2DDouble& delta)
{
    // Make the vector local for the component
    auto local = mComponent->GetPlacement()->ToLocal(delta, true);
    local.m_x *= 10;
    local.m_y *= 10;
    mPlacement.Move(local);
}

/**
 * Rotate the attribute placement
 * @param angle Angle to rotate in degrees.
 */
void LayoutComponent::Attribute::Rotate(double angle)
{
    mPlacement.Rotate(angle);
}

void LayoutComponent::Attribute::XmlSave(wxXmlNode* node)
{
    auto attrNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"attribute");
    attrNode->AddAttribute(L"name", mAttribute->GetName());
    mPlacement.XmlSave(attrNode);

    node->AddChild(attrNode);
}


void LayoutComponent::Attribute::XmlLoad(wxXmlNode* node)
{
    mPlacement.XmlLoad(node);
}


const std::wstring& LayoutComponent::Attribute::GetName() const
{
    return mAttribute->GetName();
}


/**
 * Save layout component to an XML node
 * @param node XML node to save to
 */
void LayoutComponent::XmlSave(wxXmlNode* node)
{
    auto componentNode = new wxXmlNode(wxXML_ELEMENT_NODE, L"component");
    componentNode->AddAttribute(L"number", mComponent->GetNumber());
    mPlacement.XmlSave(componentNode);

    node->AddChild(componentNode);

    for(auto attribute : mAttributes)
    {
        attribute->XmlSave(componentNode);
    }
}



/**
 * Load layout component from an XML node
 * @param node XML node to load from
 */
void LayoutComponent::XmlLoad(wxXmlNode* node)
{
    mPlacement.XmlLoad(node);

    auto child = node->GetChildren();
    for( ; child; child=child->GetNext())
    {
        auto name = child->GetName();
        if(name == L"attribute")
        {
            auto attrName = child->GetAttribute(L"name");
            auto attribute = GetAttribute(attrName.ToStdWstring());
            if(attribute != nullptr)
            {
                attribute->XmlLoad(child);
            }
        }
    }
}
