/**
 * @file Layer.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include <wx/xml/xml.h>
#include <wx/filename.h>


#include "Layer.h"
#include "PCB.h"
#include "../design/Design.h"
#include "../dlg/PCBLayerDlg.h"
#include "../PathHelper.h"


void Layer::Properties(wxWindow* mainFrame)
{
    PCBLayerDlg dlg(mainFrame,this);
    dlg.ShowModal();
}

void Layer::SetDimensions(double x, double y, double width, double height)
{
    mX = x;
    mY = y;
    mWidth = width;
    mHeight = height;
}



void Layer::Draw(wxGraphicsContext *graphics)
{
    if(mBitmap != nullptr && mBitmap->IsOk())
    {
        graphics->DrawBitmap(*mBitmap, (wxCoord)mX, (wxCoord)mY, (wxCoord)mWidth, (wxCoord)mHeight);
    }
}



/**
 * Save layer to an XML node
 * @param node XML node to save to
 */
void Layer::XmlSave(const std::wstring& designPath, wxXmlNode* node)
{
    node->AddAttribute(L"x", wxString::Format(wxT("%.1f"), mX));
    node->AddAttribute(L"y", wxString::Format(wxT("%.1f"), mY));
    node->AddAttribute(L"width", wxString::Format(wxT("%.1f"), mWidth));
    node->AddAttribute(L"height", wxString::Format(wxT("%.1f"), mHeight));
    if(!mFilename.empty())
    {
        node->AddAttribute(L"image", PathHelper::GetRelativePath(designPath, mFilename));
    }

}


/**
 * EagleLoad Layer from an XML node
 * @param node XML node to load from
 */
void Layer::XmlLoad(wxWindow* parent, const std::wstring& designPath, wxXmlNode* node)
{
//    auto model = GetPCB()->GetModel();
//    auto mainFilePath = model->GetFileDir();

    auto value = node->GetAttribute(L"width", L"150.0");
    value.ToDouble(&mWidth);

    value = node->GetAttribute(L"height", L"150.0");
    value.ToDouble(&mHeight);

    value = node->GetAttribute(L"x", L"x");
    value.ToDouble(&mX);

    value = node->GetAttribute(L"y", L"y");
    value.ToDouble(&mY);

    auto relativeFilename = node->GetAttribute(L"image", L"");
    if(!relativeFilename.IsEmpty())
    {
        // Try to load the image
        wxLogNull go_away;

        wxFileName dp(designPath);
        auto dirPath = dp.GetPath();

        auto path = dirPath + L"/" + relativeFilename;
        auto img = std::make_shared<wxImage>(path, wxBITMAP_TYPE_ANY);
        if(!img->IsOk())
        {
            wxMessageBox(wxString::Format(L"Unable to open image file %s", relativeFilename),
                    L"Failure to Open", wxOK, parent);
            return;
        }

        // Success!
        SetImage(relativeFilename, img);
    }
}

void Layer::SetImage(wxString filename, std::shared_ptr<wxImage> image)
{
    mFilename = filename;
    mImage = image;
    mOpacity = 0;

    AddAlpha();
    SetOpacity(1);
}


/**
 * Add an alpha layer to the image.
 */
void Layer::AddAlpha()
{
    if(mImage == nullptr || !mImage->IsOk())
    {
        return;
    }

    int numPixels = mImage->GetWidth() * mImage->GetHeight();

    // If there is no existing alpha map, add one
    if(!mImage->HasAlpha())
    {
        unsigned char *alpha = (unsigned char *)malloc(numPixels);
        mImage->SetAlpha(alpha);
    }
    bool ha = mImage->HasAlpha();

    auto alpha = mImage->GetAlpha();
    for(int i=0; i<numPixels; i++)
    {
        alpha[i] = 255;
    }
}

/**
 * Set the opacity of the bitmap
 * @param opacity Opacity value from 0 to 1
 */
void Layer::SetOpacity(double opacity)
{
    // If no change
    if(opacity == mOpacity)
    {
        return;
    }

    mOpacity = opacity;

    if(mImage == nullptr || !mImage->IsOk())
    {
        return;
    }

    int numPixels = mImage->GetWidth() * mImage->GetHeight();

    auto alpha = mImage->GetAlpha();
    for(int i=0; i<numPixels; i++)
    {
        alpha[i] = (int)(opacity * 255);
    }

    mBitmap = std::make_shared<wxBitmap>(*mImage);
}
