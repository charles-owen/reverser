/**
 * @file SVG.h
 * @author Charles B. Owen
 *
 *
 * Simple version of Scalable Vector Graphics
 */

#ifndef REVERSER_SVG_H
#define REVERSER_SVG_H

class wxXmlNode;

/**
 * Simple version of Scalable Vector Graphics
 */
class SVG
{
public:

    void XmlLoad(wxXmlNode* node);
    void Draw(wxGraphicsContext *graphics);

private:

    class IDrawable
    {
    public:
        virtual void Draw(wxGraphicsContext *graphics) = 0;
    };

    class Line : public IDrawable
    {
    public:
        void XmlLoad(wxXmlNode* node);
        virtual void Draw(wxGraphicsContext *graphics) override;

        double mX1 = 0;
        double mY1 = 0;
        double mX2 = 0;
        double mY2 = 0;
    };

    class Path : public IDrawable
    {
    public:
        void XmlLoad(wxXmlNode* node);
        virtual void Draw(wxGraphicsContext *graphics) override;

        void Line(wxGraphicsContext *graphics, double x1, double y1, double x2, double y2);

        std::wstring mD;
        void Curve(wxGraphicsContext* graphics, double x1, double y1, double x2, double y2, double x3, double y3,
                double x4,
                double y4);
        void Arc(wxGraphicsContext* graphics, double x1, double y1, double rx, double ry, double axis,
                double largeArcFlag,
                double sweepFlag, double x2, double y2);
    };

    class Rect : public IDrawable
    {
    public:
        void XmlLoad(wxXmlNode* node);
        virtual void Draw(wxGraphicsContext *graphics) override;

        double mX = 0;
        double mY = 0;
        double mWid = 0;
        double mHit = 0;
    };

    std::vector<std::shared_ptr<IDrawable>> mDrawables;
};

#endif //REVERSER_SVG_H
