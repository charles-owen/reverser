/**
 * @file
 * This is the main class for the design. It's the document
 * class for the system. A design consists of a Schematic and
 * a PCB.
 */

#ifndef REVERSER_DESIGN_H
#define REVERSER_DESIGN_H

#include <wx/filename.h>
#include <memory>
#include <vector>

#include "../IModelObserver.h"

class Reverser;
class Schematic;
class Board;

class Component;
class Networks;


/**
 * This is the main class for the model. It retains status of
 * the loaded and active user document.
 */
class Design
{
private:
    /// System class
    Reverser *mReverser;

    /// The loaded schematic (.sch file)
    std::shared_ptr<Schematic> mSchematic;

    /// The loaded board file (.brd file)
    std::shared_ptr<Board> mBoard;

    /// The model observers
    std::vector<IModelObserver*> mObservers;

    void SetFilename(wxString path);

    /// Path to currently open file
    wxFileName  mFilename;

public:
    Design(Reverser *reverser);

 //   std::shared_ptr<PCB> GetPCB() { return mInstance->GetPCB(); }

    void AddObserver(IModelObserver *observer);

    void UpdateObservers();

    void Save(wxString path);
    bool Load(wxString path);

    wxString GetFilename() const {return mFilename.GetName();}
    wxString GetFilePath() const {return mFilename.GetFullPath();}
    wxString GetFileDir() const {return mFilename.GetPath();}
    wxString RelativeFilename(wxString filePath);

//    std::shared_ptr<Components> GetComponents() {return mInstance->GetComponents();}
 //   std::shared_ptr<Networks> GetNetworks() {return mInstance->GetNetworks();}

    void Delete(std::shared_ptr<Component> component);

    /**
     * Get the schematic object
     * @return Schematic object
     */
    auto GetSchematic() {return mSchematic;}

    /**
     * Set the schematic
     * @param schematic Schematic object
     */
    void SetSchematic(std::shared_ptr<Schematic> schematic) {mSchematic = schematic;}

    auto GetBoard() {return mBoard;}

    void SetBoard(std::shared_ptr<Board> board) {mBoard = board;}

    void PropertiesDlg(wxWindow* parent);
};

#endif //REVERSER_DESIGN_H
