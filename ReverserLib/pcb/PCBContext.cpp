/**
 * @file PCBContext.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include <wx/graphics.h>

#include "PCBContext.h"


/**
 * A component and pin have been clicked on.
 * @param component Clicked on component
 * @param pin Pin on the component
 */
void PCBContext::Clicked(LayoutComponent* component, LayoutComponent::Pin* pin)
{
    ClearSelection();

    if(IsMode(EditMode::Components))
    {
        mSelectedComponent = component;
        mSelectedPin = pin;
    }
}

void PCBContext::Clicked(LayoutComponent *component, LayoutComponent::Attribute *attribute)
{
    ClearSelection();

    if(IsMode(EditMode::Components))
    {
        mSelectedComponent = component;
        mSelectedAttribute = attribute;
    }

}


void PCBContext::ClearSelection()
{
    mSelectedComponent = nullptr;
    mSelectedPin = nullptr;
    mSelectedAttribute = nullptr;
}


void PCBContext::Move(const wxPoint2DDouble &position, const wxPoint2DDouble &delta)
{
    if(IsMode(EditMode::Components))
    {
        if(mSelectedAttribute != nullptr)
        {
            mSelectedAttribute->Move(delta);
        }
        else if(mSelectedComponent != nullptr)
        {
            mSelectedComponent->Move(delta);
        }
    }

}


void PCBContext::Rotate(double angle)
{
    if(IsMode(EditMode::Components))
    {
        if(mSelectedAttribute != nullptr)
        {
            mSelectedAttribute->Rotate(angle);
        }
        else if(mSelectedComponent != nullptr)
        {
            mSelectedComponent->Rotate(angle);
        }
    }

}


void PCBContext::SetMode(PCBContext::EditMode mode)
{
    ClearSelection();
    mEditMode = mode;
}
