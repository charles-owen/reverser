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
    enum class Horizontal
    {
        LEFT, CENTER, RIGHT
    };

    enum class Vertical
    {
        TOP, BOTTOM
    };

    /// Increased resolution to use when drawing lines and other fine detail
    static constexpr double ResolutionFactor = 10;

    GraphicsHelper(wxGraphicsContext* graphics) : mGraphics(graphics) {}

    /// Default constructor (disabled)
    GraphicsHelper() = delete;

    /// Copy constructor (disabled)
    GraphicsHelper(const GraphicsHelper &) = delete;

    /// Assignment operator
    void operator=(const GraphicsHelper &) = delete;

    void DrawCartesianText(const wxString& text, wxDouble x, wxDouble y, Horizontal alignHorizontal=Horizontal::LEFT,
            Vertical alignVertical=Vertical::BOTTOM, bool invert=false);
    void CrossHair(wxDouble x, wxDouble y, wxDouble size=10, wxColour color=*wxWHITE, wxDouble width=0.1, bool diagonal=false);

    void Place(wxDouble x, wxDouble y, const std::wstring& rot);
    void UnPlace() {mGraphics->PopState();}

    static wxPoint2DDouble InversePlace(const wxPoint2DDouble& point, wxDouble x, wxDouble y, const std::wstring& rot);
    static wxPoint2DDouble Rotate(const wxPoint2DDouble& point, const std::wstring& rot);
};

#endif //REVERSER_GRAPHICSHELPER_H
