/**
 * @file Net.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Net.h"
#include "Segment.h"
#include "../save/Parts.h"

Net::Net(wxXmlNode* node, Parts* parts)
{
    mName = node->GetAttribute(L"name");

    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"segment")
        {
            mSegments.push_back(std::make_shared<Segment>(child, parts));
        }
    }
}

/**
 * Get all PinRefs for a net, in all segments.
 * @return Vector of PinRef pointers
 */
std::vector<std::shared_ptr<PinRef>> Net::GetPinRefs()
{
    std::vector<std::shared_ptr<PinRef>> ret;

    for(auto segment: mSegments)
    {
        auto pinRefs = segment->GetPinRefs();
        for(auto p: pinRefs)
        {
            ret.push_back(p);
        }
    }

    return ret;
}
