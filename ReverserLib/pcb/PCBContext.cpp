/**
 * @file PCBContext.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include <wx/graphics.h>

#include "PCBContext.h"
#include "../parts/Element.h"
#include "../parts/Pad.h"


/**
 * An element and pad have been clicked on.
 * @param elmeent Clicked on element
 * @param pad Pad on the component
 */
void PCBContext::Clicked(Element* element, Pad* pad)
{
    ClearSelection();

    if(IsMode(EditMode::Components))
    {
        mSelectedElement = element;
        mSelectedPad = pad;
    }
}

//void PCBContext::Clicked(LayoutComponent *component, LayoutComponent::Attribute *attribute)
//{
//    ClearSelection();
//
//    if(IsMode(EditMode::Components))
//    {
//        mSelectedComponent = component;
//        mSelectedAttribute = attribute;
//    }
//
//}


void PCBContext::ClearSelection()
{
    mSelectedElement = nullptr;
    mSelectedPad = nullptr;
}


void PCBContext::Move(const wxPoint2DDouble &position, const wxPoint2DDouble &delta)
{
    if(IsMode(EditMode::Components))
    {
        if(mSelectedElement != nullptr)
        {
            mSelectedElement->Move(delta);
        }
    }

}


void PCBContext::Rotate(double angle)
{
//    if(IsMode(EditMode::Components))
//    {
//        if(mSelectedAttribute != nullptr)
//        {
//            mSelectedAttribute->Rotate(angle);
//        }
//        else if(mSelectedComponent != nullptr)
//        {
//            mSelectedComponent->Rotate(angle);
//        }
//    }
}


void PCBContext::SetMode(PCBContext::EditMode mode)
{
    ClearSelection();
    mEditMode = mode;
}
