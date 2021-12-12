/**
 * @file GraphicsHelper.h
 * @author Charles Owen
 *
 * Helper class for graphics operations that are common.
 */

#ifndef REVERSER_GRAPHICSHELPER_H
#define REVERSER_GRAPHICSHELPER_H

/**
 * Helper class for graphics operations that are common.
 */
class GraphicsHelper {
private:
    wxGraphicsContext *mGraphics;
public:
    /// Increased resolution to use when drawing lines and other fine detail
    static constexpr double ResolutionFactor = 10;

    GraphicsHelper(wxGraphicsContext* graphics) : mGraphics(graphics) {}

    /// Default constructor (disabled)
    GraphicsHelper() = delete;

    /// Copy constructor (disabled)
    GraphicsHelper(const GraphicsHelper &) = delete;

    /// Assignment operator
    void operator=(const GraphicsHelper &) = delete;

    void DrawCartesianText(const wxString& text, wxDouble x, wxDouble y);
    void CrossHair(wxDouble x, wxDouble y, wxDouble size=10, wxColour color=*wxWHITE, wxDouble width=0.1);

    void Place(wxDouble x, wxDouble y, const std::wstring& rot);
    void UnPlace() {mGraphics->PopState();}
};

#endif //REVERSER_GRAPHICSHELPER_H
