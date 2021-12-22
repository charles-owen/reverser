/**
 * @file GraphicsHelper.cpp
 * @author Charles Owen
 */

#include "pch.h"
#include "GraphicsHelper.h"




void GraphicsHelper::DrawCartesianText(const wxString& text, wxDouble x, wxDouble y,
        Horizontal alignHorizontal, Vertical alignVertical, bool invert)
{
    mGraphics->PushState();
    mGraphics->Scale(1, -1);

    double wid, hit;
    mGraphics->GetTextExtent(text, &wid, &hit);

    switch(alignHorizontal)
    {
    case Horizontal::LEFT:
        break;

    case Horizontal::CENTER:
        x -= wid/2;
        break;

    case Horizontal::RIGHT:
        x -= wid;
        break;
    }

    switch(alignVertical)
    {
    case Vertical::TOP:
        break;

    case Vertical::BOTTOM:
        y += hit;
        break;
    }

    mGraphics->Translate(x, -y);
    if(invert)
    {
        mGraphics->Rotate(M_PI);
        mGraphics->DrawText(text, -wid, -hit);
    }
    else
    {
        mGraphics->DrawText(text, 0, 0);
    }

    mGraphics->PopState();
}


void GraphicsHelper::CrossHair(wxDouble x, wxDouble y, wxDouble size, wxColour color, wxDouble width, bool diagonal)
{
    x *= ResolutionFactor;
    y *= ResolutionFactor;
    size *= ResolutionFactor;
    width *= ResolutionFactor;

    mGraphics->PushState();
    mGraphics->Scale(1.0/ResolutionFactor, 1.0/ResolutionFactor);
    wxPen pen(color, (int)width);
    mGraphics->SetPen(pen);
    if(diagonal)
    {
        mGraphics->StrokeLine(x-size/2, y-size/2, x+size/2, y+size/2);
        mGraphics->StrokeLine(x+size/2, y-size/2, x-size/2, y+size/2);
    }
    else
    {
        mGraphics->StrokeLine(x-size/2, y, x+size/2, y);
        mGraphics->StrokeLine(x, y-size/2, x, y+size/2);
    }

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

wxPoint2DDouble GraphicsHelper::InversePlace(const wxPoint2DDouble &point, wxDouble x, wxDouble y, const std::wstring& rot)
{
    auto point1 = point - wxPoint2DDouble(x, y);
    if(!rot.empty() && rot[0] == L'R')
    {
        double angle = wxAtof(rot.c_str() + 1) / 180.0 * M_PI;
        double cs = cos(angle);
        double sn = sin(angle);

        return wxPoint2DDouble(point1.m_x * cs + point1.m_y * sn, -point1.m_x * sn + point1.m_y * cs);
    }

    return point1;
}

/**
 * Rotate a point based on Eagle file format rotation strings
 * @param point Point to rotate
 * @param rot Rotation as specified in Eagle file format (Rangle)
 * @return Rotated point
 */
wxPoint2DDouble GraphicsHelper::Rotate(const wxPoint2DDouble& point, const std::wstring& rot)
{
    if(!rot.empty() && rot[0] == L'R')
    {
        double angle = wxAtof(rot.c_str() + 1) / 180.0 * M_PI;
        double cs = cos(angle);
        double sn = sin(angle);

        return {point.m_x * cs - point.m_y * sn, point.m_x * sn + point.m_y * cs};
    }

    return point;
}
