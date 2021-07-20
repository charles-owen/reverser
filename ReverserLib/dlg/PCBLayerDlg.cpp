/**
 * @file PCBLayerDlg.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include <wx/xrc/xmlres.h>              // XRC XML resources
#include <wx/valnum.h>
#include <wx/filename.h>

#include "PCBLayerDlg.h"
#include "../pcb/Layer.h"
#include "../pcb/PCB.h"
#include "../Model.h"


PCBLayerDlg::PCBLayerDlg(Layer *layer) : mLayer(layer)
{
    mX = layer->GetX();
    mY = layer->GetY();
    mWidth = layer->GetWidth();
    mHeight = layer->GetHeight();
    mFilename = layer->GetFilename();
    mImage = layer->GetImage();

    wxXmlResource::Get()->LoadDialog(this, nullptr, "PCBLayerDlg");

    auto xCtrl = XRCCTRL(*this, "pcb_layer_x", wxTextCtrl);
    wxFloatingPointValidator<double> xValidator(1, &mX);
    xCtrl->SetValidator(xValidator);

    auto yCtrl = XRCCTRL(*this, "pcb_layer_y", wxTextCtrl);
    wxFloatingPointValidator<double> yValidator(1, &mY);
    yCtrl->SetValidator(yValidator);
    
    auto widthCtrl = XRCCTRL(*this, "pcb_layer_width", wxTextCtrl);
    wxFloatingPointValidator<double> widthValidator(1, &mWidth);
    widthCtrl->SetValidator(widthValidator);

    auto heightCtrl = XRCCTRL(*this, "pcb_layer_height", wxTextCtrl);
    wxFloatingPointValidator<double> heightValidator(1, &mHeight);
    heightCtrl->SetValidator(heightValidator);

    auto nameCtrl = XRCCTRL(*this, "pcb_layer_filename", wxStaticText);
    nameCtrl->SetLabelText(mFilename);

    Bind(wxEVT_BUTTON, &PCBLayerDlg::OnFile, this, XRCID("pcb_layer_file_button"));
    Bind(wxEVT_BUTTON, &PCBLayerDlg::OnOk, this, XRCID("wxID_OK"));

    Bind(wxEVT_TEXT, &PCBLayerDlg::OnWidthText, this, XRCID("pcb_layer_width"));
    Bind(wxEVT_TEXT, &PCBLayerDlg::OnHeightText, this, XRCID("pcb_layer_height"));

}


void PCBLayerDlg::OnOk(wxCommandEvent& event)
{
    if(Validate() && TransferDataFromWindow())
    {
        mLayer->SetDimensions(mX, mY, mWidth, mHeight);
        mLayer->SetImage(mFilename, mImage);
        mLayer->GetPCB()->GetModel()->UpdateObservers();

        EndModal(wxID_OK);
    }
}

void PCBLayerDlg::OnFile(wxCommandEvent& event)
{
    // Get the file to open
    auto model = mLayer->GetPCB()->GetModel();
    auto mainFilePath = model->GetFileDir();
    wxFileDialog
            openFileDialog(this, L"Open image file", mainFilePath, "",
            "JPEG files (*.jpg)|*.jpg|PNG files (*.png)|*.png", wxFD_OPEN | wxFD_FILE_MUST_EXIST);
    if (openFileDialog.ShowModal() == wxID_CANCEL)
    {
        return;
    }

    auto imagePath = openFileDialog.GetPath();

    // Convert into a relative mainFilePath
    auto relativeFilename = model->RelativeFilename(imagePath);
    if(relativeFilename.IsEmpty())
    {
        wxMessageBox(L"Image file must be in the same directory as the model file or in a subdirectory of that directory.");
        return;
    }

    // Try to load the image
    wxLogNull go_away;
    wxFileName imageFileName(mainFilePath, relativeFilename);
    auto image = std::make_shared<wxImage>(imageFileName.GetFullPath(), wxBITMAP_TYPE_ANY);

    if(!image->IsOk())
    {
        wxMessageBox(L"Unable to open image file");
        return;
    }

    // Success!
    mFilename = relativeFilename;
    mImage = image;

    // Indicate in the dialog box
    auto nameCtrl = XRCCTRL(*this, "pcb_layer_filename", wxStaticText);
    nameCtrl->SetLabelText(mFilename);

    UpdateAspectRatio(true);
}

void PCBLayerDlg::OnHeightText(wxCommandEvent& event)
{
    UpdateAspectRatio(false);
}


void PCBLayerDlg::OnWidthText(wxCommandEvent& event)
{
    UpdateAspectRatio(true);
}


/**
 * Force the apsect ratio in the width/height to match
 * that of the image.
 * @param widToHeight Make height match width if true, width match height if false
 */
void PCBLayerDlg::UpdateAspectRatio(bool widToHeight)
{
    if(mImage == nullptr || !mImage->IsOk())
    {
        return;
    }

    // Prevent recursion
    if(mInTextHandler)
    {
        return;
    }

    mInTextHandler = true;

    auto aspect = (double)mImage->GetWidth() / (double)mImage->GetHeight();
    // Get pointers to controls
    auto widthCtrl = XRCCTRL(*this, "pcb_layer_width", wxTextCtrl);
    auto heightCtrl = XRCCTRL(*this, "pcb_layer_height", wxTextCtrl);

    if(widToHeight)
    {
        auto widText = widthCtrl->GetValue();
        double wid;
        if(widText.ToDouble(&wid))
        {
            auto hit = wid / aspect;
            heightCtrl->SetValue(wxString::Format(L"%.1f", hit));
        }
    }
    else
    {
        auto hitText = heightCtrl->GetValue();
        double hit;
        if(hitText.ToDouble(&hit))
        {
            auto wid = hit * aspect;
            widthCtrl->SetValue(wxString::Format(L"%.1f", wid));
        }
    }

    mInTextHandler = false;
}
