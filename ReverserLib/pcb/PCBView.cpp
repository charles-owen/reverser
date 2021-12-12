#include "../pch.h"

#include <iostream>

#include "PCBView.h"
#include "../Reverser.h"
#include "../design/Design.h"
#include "PCB.h"

#include "../MainFrame.h"
#include "Layer.h"
#include "PCBPanel.h"
#include "../parts/Elements.h"

#include <wx/dcbuffer.h>
#include <wx/graphics.h>
#include <wx/xrc/xmlres.h>
#include <wx/slider.h>
#include <wx/tglbtn.h>


using namespace std;

constexpr double MaxZoom = 8;
constexpr double MinZoom = 1.0 / 8.0;

/**
 * Constructor
 * @param pcbPanel The PCB Panel that contains this view
 * @param mainFrame
 * @param reverser
 */
PCBView::PCBView(PCBPanel *pcbPanel, wxWindow* mainFrame, Reverser* reverser) :
    wxScrolled<wxWindow>(pcbPanel), mReverser(reverser), mPCBPanel(pcbPanel),
    mMainFrame(mainFrame), mSize(1200, 1000)
{
    SetScrollRate(1, 1);

    SetBackgroundStyle(wxBG_STYLE_PAINT);

    reverser->GetDesign()->AddObserver(this);

//    auto topToggle = XRCCTRL(*mMainFrame, "pcb_top_toggle", wxToggleButton);
//    topToggle->SetBitmap(wxBitmap("rc/icons/pcb-top-grn.png", wxBITMAP_TYPE_ANY));
//    auto botToggle = XRCCTRL(*mMainFrame, "pcb_bot_toggle", wxToggleButton);
//    botToggle->SetBitmap(wxBitmap("rc/icons/pcb-bot-grn.png", wxBITMAP_TYPE_ANY));
//
//
    Bind(wxEVT_PAINT, &PCBView::PaintEvent, this);
//    Bind(wxEVT_LEFT_DOWN, &PCBView::OnLeftDown, this);
//    Bind(wxEVT_LEFT_UP, &PCBView::OnLeftUp, this);
//    Bind(wxEVT_MOTION, &PCBView::OnMouseMove, this);
    Bind(wxEVT_ERASE_BACKGROUND, &PCBView::EraseBackground, this);

    mainFrame->Bind(wxEVT_BUTTON, &PCBView::OnZoomOut, this, XRCID("pcb_zoom_out"));
    mainFrame->Bind(wxEVT_BUTTON, &PCBView::OnZoomIn, this, XRCID("pcb_zoom_in"));
//    mainFrame->Bind(wxEVT_BUTTON, &PCBView::OnRotCCW, this, XRCID("pcb_rot_ccw"));
//    mainFrame->Bind(wxEVT_BUTTON, &PCBView::OnRotCW, this, XRCID("pcb_rot_cw"));

    mainFrame->Bind(wxEVT_TOGGLEBUTTON, &PCBView::OnTopToggle, this, XRCID("pcb_top_toggle"));
    mainFrame->Bind(wxEVT_TOGGLEBUTTON, &PCBView::OnBotToggle, this, XRCID("pcb_bot_toggle"));
    mainFrame->Bind(wxEVT_SLIDER, &PCBView::OnOpacityScroll, this, XRCID("pcb_opacity_slider"));

    SetZoomValue();
}

PCBView::~PCBView()
{

}


void PCBView::PaintEvent(wxPaintEvent& evt)
{
    auto design = mReverser->GetDesign();
    auto pcb = design->GetPCB();
    auto pcbWidth = pcb->GetWidth();
    auto pcbHeight = pcb->GetHeight();

    wxBufferedPaintDC dc(this);

    // Clear background to black
    auto clientSize = GetClientSize();

    dc.SetBrush(*wxBLACK_BRUSH);
    dc.SetPen(wxNullPen);
    dc.DrawRectangle(0, 0, clientSize.GetWidth(), clientSize.GetHeight());

    DoPrepareDC(dc);

    // Set to 1/10 of millimeter units
    dc.SetMapMode(wxMM_METRIC);

    dc.GetLogicalScale(&mScaleX, &mScaleY);
    mScaleX *= mZoom;
    mScaleY *= mZoom;

    SetVirtualSize(wxSize(
            (int)(pcbWidth * mScaleX),
            (int)(pcbHeight * mScaleY)
            ));

    wxGraphicsContext *graphics = wxGraphicsContext::Create(dc);
    if(graphics)
    {
        graphics->PushState();
        graphics->Scale(mZoom, mZoom);

        auto topToggle = XRCCTRL(*mMainFrame, "pcb_top_toggle", wxToggleButton);
        if(topToggle->GetValue())
        {
            pcb->GetTop()->Draw(graphics);
        }

        auto opacitySlider = XRCCTRL(*mMainFrame, "pcb_opacity_slider", wxSlider);

        pcb->GetBottom()->SetOpacity(opacitySlider->GetValue() * 0.01);
        pcb->GetBottom()->Draw(graphics);

        auto matrix = graphics->CreateMatrix();
        matrix.Set(1, 0, 0, -1, 0, pcbHeight);
        graphics->PushState();
        graphics->ConcatTransform(matrix);

        auto context = mPCBPanel->GetContext();

        auto elements = design->GetElements();
        elements->Draw(graphics, pcbWidth, pcbHeight);


//        graphics->SetPen(*wxRED_PEN);
//        graphics->SetBrush(*wxTRANSPARENT_BRUSH);
//        graphics->DrawRectangle(10, 10, 100, 50);

        graphics->PopState();

        graphics->PopState();
        delete graphics;
    }

    // Reset mapping so double-buffering works correctly
    dc.SetMapMode(wxMM_TEXT);
}

void PCBView::OnLeftDown(wxMouseEvent& event)
{
//    auto focus = FindFocus();
//
//    auto pcb = mReverser->GetDesign()->GetPCB();
//
//    auto position = ToVirtualPosition(event.GetX(), event.GetY());
//    mLastMouse = position;
//
//    auto context = mPCBPanel->GetContext();
//    if(!pcb->Click(context, position))
//    {
//        // If we did not click on anything clear the selection
//        context->ClearSelection();
//    }
//
//   // mCrosshair = ToVirtualPosition(event.GetX(), event.GetY());
//   // SetViewCenter(mCrosshair);
//
//  //  mCrosshair = GetViewCenter();
//    Refresh();
}


void PCBView::OnLeftUp(wxMouseEvent& event)
{
    OnMouseMove(event);
}


void PCBView::OnMouseMove(wxMouseEvent& event)
{
    auto position = ToVirtualPosition(event.GetX(), event.GetY());
    auto delta = position - mLastMouse;
    mLastMouse = position;

    if(event.Dragging())
    {
        auto context = mPCBPanel->GetContext();
        context->Move(position, delta);

        Refresh();
    }

}


void PCBView::EraseBackground(wxEraseEvent& event)
{
}


void PCBView::UpdateObserver()
{
    Refresh();
}


void PCBView::OnRotCW(wxCommandEvent& event)
{
    auto context = mPCBPanel->GetContext();
    if(wxGetMouseState().GetModifiers() == wxMOD_SHIFT)
    {
        context->Rotate(5);
    }
    else
    {
        context->Rotate(90);
    }

    SetFocus();
    Refresh();
}


void PCBView::OnRotCCW(wxCommandEvent& event)
{
    auto context = mPCBPanel->GetContext();

    if(wxGetMouseState().GetModifiers() == wxMOD_SHIFT)
    {
        context->Rotate(-5);
    }
    else
    {
        context->Rotate(-90);
    }
    SetFocus();
    Refresh();
}


void PCBView::OnZoomOut(wxCommandEvent& event)
{
    auto newZoom = mZoom / 2;
    if(newZoom < MinZoom)
    {
        newZoom = MinZoom;
    }

    SetZoom(newZoom);
}


void PCBView::OnZoomIn(wxCommandEvent& event)
{
    auto newZoom = mZoom * 2;
    if(newZoom > MaxZoom)
    {
        newZoom = MaxZoom;
    }

    SetZoom(newZoom);
}

void PCBView::SetZoom(double newZoom)
{
    auto middle = GetViewCenter();

    auto factor = newZoom / mZoom;
    mZoom = newZoom;

    mScaleX *= factor;
    mScaleY *= factor;

    auto pcb = mReverser->GetDesign()->GetPCB();
    auto pcbWidth = pcb->GetWidth();
    auto pcbHeight = pcb->GetHeight();
    SetVirtualSize(wxSize(
            (int)(pcbWidth * mScaleX),
            (int)(pcbHeight * mScaleY)
    ));

    SetViewCenter(middle);
    SetZoomValue();
    Refresh();
}

/**
 * Get the virtual coordinates of the middle of the view window.
 * @return double pair of position in millimeters.
 */
wxPoint2DDouble PCBView::GetViewCenter()
{
    int w, h;
    GetClientSize(&w, &h);
    return ToVirtualPosition(w/2, h/2);
}

/**
 * Set the center of the window from a point on the PCB.
 * Scrolls the window to the right place.
 * @param center Center in millimeters
 */
void PCBView::SetViewCenter(wxPoint2DDouble center)
{
//    int vx, vy;
//    GetViewStart(&vx, &vy);
//
//    // Target to logical coordinates
//    int tx = (int)(center.m_x * mScaleX);
//    int ty = (int)(center.m_y * mScaleY);
//
//    // Window size in logical coordinates
//    int cx, cy;
//    GetClientSize(&cx, &cy);
//
//    // Get the computed virtual size based on the current scale
//    auto pcb = mReverser->GetDesign()->GetPCB();
//    auto pcbSize = pcb->GetSize();
//    int sx = (int)(pcbSize.x * mScaleX);
//    int sy = (int)(pcbSize.y * mScaleY);
//
//    // Get pixels per scroll unit
//    int ppuX, ppuY;
//    GetScrollPixelsPerUnit(&ppuX, &ppuY);
//
//    // Make target and widow size be scroll coordinates
//    tx /= ppuX;
//    ty /= ppuY;
//    cx /= ppuX;
//    cy /= ppuY;
//    sx /= ppuX;
//    sy /= ppuY;
//
//    // The scroll position
//    auto scrollX = tx - cx/2;
//    auto scrollY = ty - cy/2;
//    if(scrollX > (sx - cx))
//    {
//        scrollX = sx - cx;
//    }
//    if(scrollY > (sy - cy))
//    {
//        scrollY = sy - cy;
//    }
//    scrollX = max(scrollX, 0);
//    scrollY = max(scrollY, 0);
//
//    Scroll(scrollX, scrollY);
//    Refresh();
}

/**
 * Convert a point in the window (like a mouse click) into
 * a point on the virtual space.
 * @param x X position
 * @param y Y position
 * @return
 */
wxPoint2DDouble PCBView::ToVirtualPosition(int x, int y)
{
    int xx, yy;
    CalcUnscrolledPosition(x, y, &xx, &yy);
    return wxPoint2DDouble(xx / mScaleX, yy / mScaleY);
}

/**
 * Set the zoom value in the zoom toolbar control
 */
void PCBView::SetZoomValue()
{
    auto zoomEdit = XRCCTRL(*mMainFrame, "pcb_zoom", wxTextCtrl);
    zoomEdit->SetValue(wxString::Format(L"%4d", (int)(mZoom * 100)));
}


void PCBView::Crosshair(wxGraphicsContext *graphics, double x, double y, double size)
{
    constexpr double scale = 0.25;
    size /= scale;

    graphics->PushState();
    graphics->Translate(x, y);
    graphics->Scale(1/mZoom * scale, 1/mZoom * scale);
    graphics->SetPen(*wxRED_PEN);
    graphics->StrokeLine(-size/2, 0, size/2, 0);
    graphics->StrokeLine(0, -size/2, 0, size/2);
    graphics->PopState();
}


void PCBView::OnOpacityScroll(wxCommandEvent &event)
{
    auto ctrl = XRCCTRL(*mMainFrame, "pcb_bot_toggle", wxToggleButton);
    auto opacitySlider = XRCCTRL(*mMainFrame, "pcb_opacity_slider", wxSlider);
    ctrl->SetValue(opacitySlider->GetValue() > 0);
    Refresh();
}



void PCBView::OnTopToggle(wxCommandEvent& event)
{
    Refresh();
}

void PCBView::OnBotToggle(wxCommandEvent& event)
{
    auto ctrl = XRCCTRL(*mMainFrame, "pcb_bot_toggle", wxToggleButton);
    auto opacitySlider = XRCCTRL(*mMainFrame, "pcb_opacity_slider", wxSlider);

    if(ctrl->GetValue())
    {
        // Was off, is now on
        opacitySlider->SetValue(100);
    }
    else
    {
        // Was on, now off
        opacitySlider->SetValue(0);
    }

    Refresh();
}
