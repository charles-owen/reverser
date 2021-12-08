/**
 * @file
 * @author Charles B. Owen
 */

#include "../pch.h"


#include <wx/xml/xml.h>

#include "Design.h"
#include "../schematic/Schematic.h"
#include "../board/Board.h"
#include "DesignPropertiesDlg.h"



Design::Design(Reverser *reverser) : mReverser(reverser)
{
    // Create empty schematic and board objects
    mSchematic = std::make_shared<Schematic>();
    mBoard = std::make_shared<Board>();
}

void Design::PropertiesDlg(wxWindow *parent)
{
    DesignPropertiesDlg dialog(parent, this);
    dialog.ShowModal();
}

void Design::AddObserver(IModelObserver *observer)
{
    mObservers.push_back(observer);
}

void Design::UpdateObservers()
{
    for(auto observer : mObservers)
    {
        observer->UpdateObserver();
    }
}


void Design::Save(wxWindow* mainFrame, wxString path)
{
    wxXmlDocument xmlDoc;

    auto root = new wxXmlNode(wxXML_ELEMENT_NODE, L"reverser");
    xmlDoc.SetRoot(root);

    mSchematic->SaveXml(path.ToStdWstring(), root);
    mBoard->SaveXml(path.ToStdWstring(), root);

    if(!xmlDoc.Save(path, wxXML_NO_INDENTATION))
    {
        wxMessageBox(L"Write to XML failed");
        return;
    }

    SetFilename(path);
}


bool Design::Load(wxWindow* mainFrame, wxString path)
{
    wxXmlDocument xmlDoc;
    if(!xmlDoc.Load(path))
    {
        wxMessageBox(L"Unable to load Reverser file");
        return false;
    }

    auto wpath = path.ToStdWstring();
    auto root = xmlDoc.GetRoot();

    SetFilename(path);
    mSchematic->LoadXml(mainFrame, wpath, root);
    mBoard->LoadXml(mainFrame, wpath, root);

    UpdateObservers();
    return true;
}

/**
 * Save the filename and file path
 * @param filename Filename (just the filename)
 * @param path Full file path
 */
void Design::SetFilename(wxString path)
{
    mFilename = path;
}

/**
 * Convert an absolute file path into a path relative
 * to the model directory. Only works if the file is
 * in a subdirectory of the model directory.
 * @param filePath Full file path to extra from
 * @return Relative part of path or empty string if none.
 */
wxString Design::RelativeFilename(wxString filePath)
{
    auto modelPath = mFilename.GetPath();

    wxString rest;
    if(!filePath.StartsWith(modelPath, &rest))
    {
        return L"";
    }

    return rest.Mid(1);
}

void Design::Delete(std::shared_ptr<Component> component)
{
 //   mInstance->Delete(component);
}
