/**
 * @file SchematicFrame.h
 * @author Charles B. Owen
 *
 * The frame for a printed circuit board display.
 */
#ifndef _SchematicPANEL_H_
#define _SchematicPANEL_H_

class MainFrame;
class wxNotebook;

class SchematicPanel : public wxPanel
{
public:
  SchematicPanel(MainFrame *mainFrame, wxNotebook *parent);

private:
  MainFrame *mMainFrame;

  wxDECLARE_EVENT_TABLE();
};

#endif //_SchematicPANEL_H_
