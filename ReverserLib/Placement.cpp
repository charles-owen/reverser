/**
 * @file Placement.cpp
 * @author Charles B. Owen
 */

#include "pch.h"

#include "Placement.h"
#include "XmlHelper.h"

#include <wx/graphics.h>

/**
 * Save placement into an XML node
 * @param node
 */
void Placement::XmlSave(wxXmlNode* node)
{
    XmlHelper::SetAttributeDouble(node, L"x", mX);
    XmlHelper::SetAttributeDouble(node, L"y", mY);

    if(mRotation != 0)
    {
        XmlHelper::SetAttributeDouble(node, L"r", mRotation);
    }

    if(mSize != 1)
    {
        XmlHelper::SetAttributeDouble(node, L"size", mSize);
    }

    if(!mShow)
    {
        node->AddAttribute(L"show", L"false");
    }
}

/**
 * Load placement from an XML node
 * @param node XML node to load from
 */
void Placement::XmlLoad(wxXmlNode* node)
{
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);
    mRotation = XmlHelper::GetAttributeDouble(node, L"r", 0);
    mSize = XmlHelper::GetAttributeDouble(node, L"size", 1);
    mShow = XmlHelper::GetAttributeBool(node, L"size", true);
}

void Placement::Apply(wxGraphicsContext* graphics)
{
    graphics->PushState();
    graphics->Translate(mX, mY);
    graphics->Rotate(mRotation / 180.0 * M_PI);
    graphics->Scale(mSize, mSize);
}


void Placement::UnApply(wxGraphicsContext* graphics)
{
    graphics->PopState();
}


void Placement::Move(const wxPoint2DDouble& delta)
{
    mX += delta.m_x;
    mY += delta.m_y;
}


/**
 * Convert coordinates to local for this placement;
 * @param position Position to convert
 * @return Local coordinates
 */
wxPoint2DDouble Placement::ToLocal(const wxPoint2DDouble &position, bool noTranslation)
{
    auto x = position.m_x;
    auto y = position.m_y;

    if(!noTranslation)
    {
        // Cancel translation
        x -= mX;
        y -= mY;
    }

    // Cancel rotation
    auto a = -mRotation / 180.0 * M_PI;
    auto sn = sin(a);
    auto cs = cos(a);
    auto x1 = x * cs - y * sn;
    auto y1 = x * sn + y * cs;

    // Cancel scale
    x1 /= mSize;
    y1 /= mSize;

    return wxPoint2DDouble(x1, y1);
}