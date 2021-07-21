#include "pch.h"

#include "ReverserApp.h"
#include "MainFrame.h"

#include "wx/xrc/xmlres.h"          // XRC XML resources

bool ReverserApp::OnInit()
{
    if (!wxApp::OnInit())
        return false;

    // Add image type handlers
    wxInitAllImageHandlers();

    // Initialize XRC handlers
    wxXmlResource::Get()->InitAllHandlers();

    // Load all XRC resources
    if (!wxXmlResource::Get()->LoadAllFiles("rc"))
    {
        return false;
    }

    auto frame = new MainFrame();
    frame->Show(true);

    return true;
}
