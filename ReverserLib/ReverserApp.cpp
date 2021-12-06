#include "pch.h"

#include "ReverserApp.h"
#include "MainFrame.h"

#include "wx/xrc/xmlres.h"          // XRC XML resources
#include <wx/stdpaths.h>

bool ReverserApp::OnInit()
{
    if (!wxApp::OnInit())
        return false;

    // Add image type handlers
    wxInitAllImageHandlers();

    // Initialize XRC handlers
    wxXmlResource::Get()->InitAllHandlers();

    // Load all XRC resources from the program resources
    auto standardPaths = wxStandardPaths::Get();
    if (!wxXmlResource::Get()->LoadAllFiles(standardPaths.GetResourcesDir() + "/xrc"))
    {
        return false;
    }

    auto frame = new MainFrame();
    frame->Show(true);

    return true;
}
