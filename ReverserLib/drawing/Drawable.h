/**
 * @file Draw.h
 * @author Charles B. Owen
 *
 * Parts of a layout or symbol that are drawn.
 *
 */

#ifndef REVERSER_DRAWABLE_H
#define REVERSER_DRAWABLE_H

#include "SVG.h"

class wxXmlNode;

/**
 * Parts of a layout or symbol that are drawn.
 */
class Drawable
{
public:

    void Draw(wxGraphicsContext *graphics);
    void XmlLoad(wxXmlNode* node);

    /**
     * Interface for something we are able to draw
     */
    class IDrawable
    {
    public:
        virtual void XmlLoad(wxXmlNode* node) = 0;
        virtual void Draw(wxGraphicsContext *graphics) = 0;
    };

private:
    double mX = 0;
    double mY = 0;

    class DrawableSVG : public IDrawable
    {
    public:
        void XmlLoad(wxXmlNode* node) override;
        virtual void Draw(wxGraphicsContext *graphics) override;

        SVG mSVG;
    };

    class DrawableLine : public IDrawable
    {
    public:
        void XmlLoad(wxXmlNode* node) override;
        virtual void Draw(wxGraphicsContext *graphics) override;

    private:
        double mX1=0;
        double mY1=0;
        double mX2=0;
        double mY2=0;
    };

    class DrawableRect : public IDrawable
    {
    public:
        void XmlLoad(wxXmlNode* node) override;
        virtual void Draw(wxGraphicsContext *graphics) override;

    private:
        double mX=0;
        double mY=0;
        double mWidth=0;
        double mHeight=0;
    };

    std::vector<std::shared_ptr<IDrawable>> mDrawables;
};

#endif //REVERSER_DRAWABLE_H
