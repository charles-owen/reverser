#include "pch.h"

#include "ReverserApp.h"
#include "MainFrame.h"

#include "wx/xrc/xmlres.h"          // XRC XML resources
#include "wx/cmdline.h"

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
    auto cwd = wxGetCwd();

    if(!mFileToOpen.empty())
    {
        frame->FileOpen(mFileToOpen);
    }

    return true;
}

void ReverserApp::OnInitCmdLine(wxCmdLineParser& parser)
{
    parser.AddParam(L"filename", wxCMD_LINE_VAL_STRING, wxCMD_LINE_PARAM_OPTIONAL);
    wxAppBase::OnInitCmdLine(parser);
}

bool ReverserApp::OnCmdLineParsed(wxCmdLineParser& parser)
{
    if(parser.GetParamCount() > 0)
    {
        wxFileName fileToOpen(parser.GetParam(0));
        fileToOpen.MakeAbsolute();
        mFileToOpen = fileToOpen.GetFullPath().ToStdWstring();
    }

    return wxAppBase::OnCmdLineParsed(parser);
}
