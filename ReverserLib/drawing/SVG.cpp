/**
 * @file SVG.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include <wx/graphics.h>
#include <wctype.h>
#include <wchar.h>

#include "SVG.h"

#include "../XmlHelper.h"

using namespace std;


void SVG::XmlLoad(wxXmlNode* node)
{
    auto child = node->GetChildren();
    for( ; child; child=child->GetNext())
    {
        auto name = child->GetName();
        if(name == L"line")
        {
            auto line = std::make_shared<Line>();
            line->XmlLoad(child);
            mDrawables.push_back(line);
        }
        else if(name == L"path")
        {
            auto path = std::make_shared<Path>();
            path->XmlLoad(child);
            mDrawables.push_back(path);
        }
        else if(name == L"rect")
        {
            auto rect = std::make_shared<Rect>();
            rect->XmlLoad(child);
            mDrawables.push_back(rect);
        }

    }

}

void SVG::Draw(wxGraphicsContext* graphics)
{
    for(auto drawable : mDrawables)
    {
        drawable->Draw(graphics);
    }
}

void SVG::Line::XmlLoad(wxXmlNode* node)
{
    mX1 = XmlHelper::GetAttributeDouble(node, L"x1", 0);
    mY1 = XmlHelper::GetAttributeDouble(node, L"y1", 0);
    mX2 = XmlHelper::GetAttributeDouble(node, L"x2", 0);
    mY2 = XmlHelper::GetAttributeDouble(node, L"y2", 0);
}


void SVG::Line::Draw(wxGraphicsContext* graphics)
{
    graphics->SetPen(*wxWHITE_PEN);
    graphics->StrokeLine(mX1, mY1, mX2, mY2);
}

void SVG::Path::XmlLoad(wxXmlNode* node)
{
    mD = node->GetAttribute(L"d");
}

void SVG::Path::Draw(wxGraphicsContext* graphics)
{
    double x = 0;
    double y = 0;
    double x3 = 0;
    double y3 = 0;
    double startX = 0;
    double startY = 0;
    int pos = 0;        // Index into the string

    while(pos < mD.size())
    {
        // Skip over any spaces or other whitespace
        auto ch = mD[pos];
        if(iswspace(ch))
        {
            pos++;
            continue;
        }

        // We should be on a letter now
        auto cmd = ch;
        pos++;

        // Accumulator for arguments
        wstring arg;

        // Collection of arguments as doubles
        std::vector<double> argsD;

        // Extract everything up to the next letter or end
        while(pos < mD.size() && !iswalpha(mD[pos]))
        {
            ch = mD[pos];

            if(ch == L',')
            {
                // We have a comma, skip to the next argument
                pos++;
                argsD.push_back(wcstod(arg.c_str(), nullptr));
                arg.clear();
                continue;
            }
            else if(ch == L'-' && !arg.empty())
            {
                // Minus sign, we bank that, but also skip to the next argument
                argsD.push_back(wcstod(arg.c_str(), nullptr));
                arg.clear();
            }

            arg.push_back(ch);

            pos++;
        }

        if(!arg.empty())
        {
            // Push any final value
            argsD.push_back(wcstod(arg.c_str(), nullptr));
        }

        auto arg0 = argsD.size() > 0 ? argsD[0] : 0;
        auto arg1 = argsD.size() > 1 ? argsD[1] : 0;
        auto arg2 = argsD.size() > 2 ? argsD[2] : 0;
        auto arg3 = argsD.size() > 3 ? argsD[3] : 0;
        auto arg4 = argsD.size() > 4 ? argsD[4] : 0;
        auto arg5 = argsD.size() > 5 ? argsD[5] : 0;
        auto arg6 = argsD.size() > 6 ? argsD[6] : 0;

        // Process the command
        switch(cmd)
        {
        case L'M':
            x = arg0;
            y = arg1;
            startX = x;
            startY = y;
            break;

        case L'm':
            x += arg0;
            y += arg1;
            startX = x;
            startY = y;
            break;

        case L'V':
            Line(graphics, x, y, x, arg0);
            y = arg0;
            break;

        case L'v':
            Line(graphics, x, y, x, y+arg0);
            y += arg0;
            break;

        case L'H':
            Line(graphics, x, y, arg0, y);
            x = arg0;
            break;

        case L'h':
            Line(graphics, x, y, x+arg0, y);
            x += arg0;
            break;

        case L'c':
            x3 = x+arg2;
            y3 = y+arg3;
            Curve(graphics, x, y, x+arg0, y+arg1, x3, y3, x+arg4, y+arg5);
            //Line(graphics, x, y, x+arg4, y+arg5);
            x += arg4;
            y += arg5;
            break;

        case L'C':
            x3 = arg2;
            y3 = arg3;
            Curve(graphics, x, y, arg0, arg1, x3, y3, arg4, arg5);
            //Line(graphics, x, y, arg4, arg5);
            x = arg4;
            y = arg5;
            break;

        case L's':
            Curve(graphics, x, y, x * 2 - x3, y * 2 - y3, x+arg0, y+arg1, x+arg2, y+arg3);
            Line(graphics, x, y, x+arg2, y+arg3);
            x3 = x+arg0;
            y3 = y+arg1;
            x += arg2;
            y += arg3;
            break;

        case L'S':
            Curve(graphics, x, y, x * 2 - x3, y * 2 - y3, arg0, arg1, arg2, arg3);
            Line(graphics, x, y, arg2, arg3);
            x3 = arg0;
            y3 = arg1;
            x = arg2;
            y = arg3;
            break;

        case L'a':
          //  Line(graphics, x, y, x+arg5, y+arg6);
            Arc(graphics, x, y, arg0, arg1, arg2, arg3, arg4, x+arg5, y+arg6);
            x += arg5;
            y += arg6;
            break;

        case L'A':
           // Line(graphics, x, y, arg5, arg6);
            Arc(graphics, x, y, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
            x = arg5;
            y = arg6;
            break;

        case L'z':
        case L'Z':
            Line(graphics, x, y, startX, startY);
            break;
        }


    }

}

double angleBetweenVectors(double ux, double uy, double vx, double vy)
{
    double ul = sqrt(ux * ux + uy * uy);
    double vl = sqrt(vx * vx + vy * vy);
    double angle = acos( (ux * vx + uy * vy) / (vl * vl));
    if((ux * vy - uy * vx) < 0)
    {
        angle = -angle;
    }

    return angle;
}

void SVG::Path::Arc(wxGraphicsContext *graphics, double x1, double y1, double rx, double ry, double axis,
        double largeArcFlag, double sweepFlag, double x2, double y2)
{
    double cosAxis = cos(axis);
    double sinAxis = sin(axis);

    bool fA = largeArcFlag > 0;
    bool fS = sweepFlag > 0;

    // Compute x1p, y1p
    auto x1p = cosAxis * ((x1 - x2)/2) + sinAxis * ((y1 - y2) / 2);
    auto y1p = -sinAxis * ((x1 - x2)/2) + cosAxis * ((y1 - y2) / 2);

    // Compute cxp, cyp
    auto factor = sqrt((rx * rx * ry * ry - rx * rx * y1p * y1p - ry * ry * x1p * x1p) /
            (rx * rx * y1p * y1p + ry * ry * x1p * x1p));
    factor = fA == fS ? -factor : factor;

    auto cxp = factor * (rx * y1p / ry);
    auto cyp = factor * (-ry * x1p / rx);

    // Compute cx, cy
    auto cx = cosAxis * cxp - sinAxis * cyp + (x1 + x2) / 2;
    auto cy = sinAxis * cxp + cosAxis * cyp + (y1 + y2) / 2;

    // Compute theta1 and delta
    double theta1 = angleBetweenVectors(1, 0, (x1p - cxp) / rx, (y1p - cyp) / ry);
    double delta = angleBetweenVectors((x1p - cxp) / rx, (y1p - cyp) / ry, (-x1p - cxp) / rx, (-y1p - cyp) / ry);

    delta = delta >= 0 ? fmod(delta, M_PI * 2) : -fmod(-delta, M_PI * 2);
    if(!fS && delta >= 0)
    {
        delta -= M_PI * 2;
    }
    else if(fS && delta < 0)
    {
        delta += M_PI * 2;
    }

    graphics->SetPen(*wxWHITE_PEN);

    int steps = 10 + (int)(delta / (M_PI * 2) * 50);

    double theta = theta1;
    for(int i=0; i<=steps; i++)
    {
        double cosTheta = cos(theta);
        double sinTheta = sin(theta);

        x2 = cosAxis * rx * cosTheta - sinAxis * ry * sinTheta + cx;
        y2 = sinAxis * rx * cosTheta + cosAxis * ry * sinTheta + cy;

        graphics->StrokeLine(x1, y1, x2, y2);

        x1 = x2;
        y1 = y2;

        theta += delta / steps;
    }
}

void SVG::Path::Line(wxGraphicsContext *graphics, double x1, double y1, double x2, double y2)
{
    graphics->SetPen(*wxWHITE_PEN);
    graphics->StrokeLine(x1, y1, x2, y2);
}


void SVG::Path::Curve(wxGraphicsContext *graphics, double x1, double y1, double x2, double y2,
        double x3, double y3, double x4, double y4)
{
    graphics->SetPen(*wxWHITE_PEN);
    auto path = graphics->CreatePath();
    path.MoveToPoint(x1, y1);
    path.AddCurveToPoint(x2, y2, x3, y3, x4, y4);
    //path.CloseSubpath();
    graphics->StrokePath(path);
}

void SVG::Rect::XmlLoad(wxXmlNode* node)
{
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);
    mWid = XmlHelper::GetAttributeDouble(node, L"width", 0);
    mHit = XmlHelper::GetAttributeDouble(node, L"height", 0);

}


void SVG::Rect::Draw(wxGraphicsContext* graphics)
{
    graphics->SetBrush(*wxWHITE_BRUSH);
    graphics->SetPen(wxNullPen);
    graphics->DrawRectangle(mX, mY, mWid, mHit);
}
