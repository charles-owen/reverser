/**
 * @file GraphicsHelper.cpp
 * @author Charles Owen
 */

#include "pch.h"
#include "GraphicsHelper.h"




void GraphicsHelper::DrawCartesianText(const wxString& text, wxDouble x, wxDouble y)
{
    mGraphics->PushState();
    mGraphics->Scale(1, -1);
    mGraphics->DrawText(text, x, -y);
    mGraphics->PopState();
}


void GraphicsHelper::CrossHair(wxDouble x, wxDouble y, wxDouble size, wxColour color, wxDouble width)
{
    x *= ResolutionFactor;
    y *= ResolutionFactor;
    size *= ResolutionFactor;
    width *= ResolutionFactor;

    mGraphics->PushState();
    mGraphics->Scale(1.0/ResolutionFactor, 1.0/ResolutionFactor);
    wxPen pen(color, (int)width);
    mGraphics->SetPen(pen);
    mGraphics->StrokeLine(x-size/2, y, x+size/2, y);
    mGraphics->StrokeLine(x, y-size/2, x, y+size/2);
    mGraphics->PopState();
}

void GraphicsHelper::Place(wxDouble x, wxDouble y, const std::wstring& rot)
{
    mGraphics->PushState();
    mGraphics->Translate(x, y);
    if(!rot.empty() && rot[0] == L'R')
    {
        double angle = wxAtof(rot.c_str() + 1);
        mGraphics->Rotate(angle / 180.0 * M_PI);
    }
}

