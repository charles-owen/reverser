/**
 * @file PCBFrame.h
 * @author Charles B. Owen
 *
 * The frame for a printed circuit board display.
 */
#ifndef _PCBPANEL_H_
#define _PCBPANEL_H_

#include "../IModelObserver.h"

class MainFrame;
class Reverser;
class PCBPanel;

class PCBView : public wxScrolled<wxWindow>, public IModelObserver
{

private:
    void SetZoomValue();

    void PaintEvent(wxPaintEvent& evt);
    void EraseBackground(wxEraseEvent& event);

    void OnLeftDown(wxMouseEvent& event);
    void OnLeftUp(wxMouseEvent& event);
    void OnMouseMove(wxMouseEvent& event);

    void OnZoomOut(wxCommandEvent& event);
    void OnZoomIn(wxCommandEvent& event);
    void OnOpacityScroll(wxCommandEvent& event);
    void OnRotCW(wxCommandEvent& event);
    void OnRotCCW(wxCommandEvent& event);

    void OnTopToggle(wxCommandEvent& event);
    void OnBotToggle(wxCommandEvent& event);

    wxPoint2DDouble ToVirtualPosition(int x, int y);


    void SetViewCenter(wxPoint2DDouble center);
    void SetZoom(double newZoom);


    void Crosshair(wxGraphicsContext *graphics, double x, double y, double size=20);

    double mZoom = 1.0;     // Current zoom amount
    double mScaleX = 1.0;   // X Scale we are actually displaying at
    double mScaleY = 1.0;   // Y Scale we are actually displaying at

    Reverser *mReverser;
    PCBPanel *mPCBPanel;
    wxWindow *mMainFrame;
    wxSize mSize;

    wxPoint2DDouble mLastMouse;

public:
    PCBView(PCBPanel *pcbPanel, wxWindow* mainFrame, Reverser *reverser);
    ~PCBView();

    void UpdateObserver() override;

    wxPoint2DDouble GetViewCenter();

};

#endif //_PCBPANEL_H_
