//
// Created by charl on 4/22/2021.
//

#ifndef _MYAPP_H_
#define _MYAPP_H_

class ReverserApp : public wxApp
{
private:
    std::wstring mFileToOpen;

public:
    bool OnInit() override;

    void OnInitCmdLine(wxCmdLineParser& parser) override;

    bool OnCmdLineParsed(wxCmdLineParser& parser) override;
};


#endif //_MYAPP_H_
