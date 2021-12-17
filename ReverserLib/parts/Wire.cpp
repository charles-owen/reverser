/**
 * @file Wire.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Wire.h"

#include "../XmlHelper.h"

/**
 * <wire x1="8.89" y1="2.921" x2="-8.89" y2="2.921" width="0.1524" layer="21"/>
 * @param node
 */
Wire::Wire(wxXmlNode* node)
{
    mX1 = XmlHelper::GetAttributeDouble(node, L"x1", 0);
    mY1 = XmlHelper::GetAttributeDouble(node, L"y1", 0);
    mX2 = XmlHelper::GetAttributeDouble(node, L"x2", 0);
    mY2 = XmlHelper::GetAttributeDouble(node, L"y2", 0);
    mWidth =  XmlHelper::GetAttributeDouble(node, L"width", 0);
    mLayer = XmlHelper::GetAttributeInt(node, L"layer", 0);
}


void Wire::Draw(wxGraphicsContext* graphics, PCBContext* context, Element* element)
{
    graphics->Scale(0.1, 0.1);

    wxPen pen(*wxWHITE, (int)(mWidth * 20));
    graphics->SetPen(pen);
    graphics->StrokeLine(mX1*10, mY1*10, mX2*10, mY2*10);

    graphics->Scale(10, 10);
}
