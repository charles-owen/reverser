/**
 * @file Draw.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include <wx/graphics.h>

#include "Drawable.h"

#include "../XmlHelper.h"


void Drawable::XmlLoad(wxXmlNode* node)
{
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);

    auto child = node->GetChildren();
    for( ; child; child=child->GetNext())
    {
        auto name = child->GetName();
        std::shared_ptr<IDrawable> drawable;

        if(name == L"svg")
        {
            drawable = std::make_shared<DrawableSVG>();
        }
        else if(name == L"line")
        {
            drawable = std::make_shared<DrawableLine>();
        }
        else if(name == L"rect")
        {
            drawable = std::make_shared<DrawableRect>();
        }

        if(drawable != nullptr)
        {
            mDrawables.push_back(drawable);
            drawable->XmlLoad(child);
        }
    }
}

void Drawable::Draw(wxGraphicsContext *graphics)
{
    graphics->PushState();
    graphics->Translate(mX*10, mY*10);

    for(auto drawable : mDrawables)
    {
        drawable->Draw(graphics);
    }

    graphics->PopState();
}

void Drawable::DrawableSVG::XmlLoad(wxXmlNode* node)
{
    mSVG.XmlLoad(node);
}

void Drawable::DrawableSVG::Draw(wxGraphicsContext* graphics)
{
    mSVG.Draw(graphics);
}

void Drawable::DrawableLine::XmlLoad(wxXmlNode* node)
{
    mX1 = XmlHelper::GetAttributeDouble(node, L"x1", 0);
    mY1 = XmlHelper::GetAttributeDouble(node, L"y1", 0);
    mX2 = XmlHelper::GetAttributeDouble(node, L"x2", 0);
    mY2 = XmlHelper::GetAttributeDouble(node, L"y2", 0);

}

void Drawable::DrawableLine::Draw(wxGraphicsContext* graphics)
{
    graphics->SetPen(*wxWHITE_PEN);
    graphics->StrokeLine(mX1*10, mY1*10, mX2*10, mY2*10);
}
void Drawable::DrawableRect::XmlLoad(wxXmlNode* node)
{
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);
    mWidth = XmlHelper::GetAttributeDouble(node, L"width", 0);
    mHeight = XmlHelper::GetAttributeDouble(node, L"height", 0);
}

void Drawable::DrawableRect::Draw(wxGraphicsContext* graphics)
{
    graphics->SetPen(*wxWHITE_PEN);
    graphics->SetBrush(wxNullBrush);
    graphics->DrawRectangle(mX*10, mY*10, mWidth*10, mHeight*10);
}
