/**
 * @file Segment.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Segment.h"
#include "../parts/Wire.h"
#include "../parts/Junction.h"
#include "PinRef.h"

Segment::Segment(wxXmlNode* node, Parts* parts)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        std::shared_ptr<Primitive> primitive;

        auto name = child->GetName();
        if(name == L"wire")
        {
            auto wire = std::make_shared<Wire>(child);
            primitive = wire;
        }
        else if(name == L"junction")
        {
            primitive = std::make_shared<Junction>(child);
        }
        else if(name == L"pinref")
        {
            auto pinRef = std::make_shared<PinRef>(child, parts);
            mPins.push_back(pinRef);
        }

        if(primitive != nullptr)
        {
            mPrimitives.push_back(primitive);
        }
    }
}
