/**
 * @file
 * This is the main class for the model. It retains status of
 * the loaded and active user document.
 */

#ifndef REVERSER_MODEL_H
#define REVERSER_MODEL_H

#include <wx/filename.h>
#include <memory>
#include <vector>

#include "IModelObserver.h"
#include "ModelInstance.h"

class Component;
class Networks;

/**
 * This is the main class for the model. It retains status of
 * the loaded and active user document.
 */
class Model
{
public:
    Model(Reverser *reverser);

    std::shared_ptr<PCB> GetPCB() { return mInstance->GetPCB(); }

    void AddObserver(IModelObserver *observer);

    void UpdateObservers();

    void Save(wxString path);
    bool Load(wxString path);

    wxString GetFilename() const {return mFilename.GetName();}
    wxString GetFilePath() const {return mFilename.GetFullPath();}
    wxString GetFileDir() const {return mFilename.GetPath();}
    wxString RelativeFilename(wxString filePath);

    std::shared_ptr<Components> GetComponents() {return mInstance->GetComponents();}
    std::shared_ptr<Networks> GetNetworks() {return mInstance->GetNetworks();}

    void Delete(std::shared_ptr<Component> component);

private:
    /// System class
    Reverser *mReverser;

    /// Current model instance
    std::shared_ptr<ModelInstance> mInstance;

    /// The model observers
    std::vector<IModelObserver*> mObservers;

    void SetFilename(wxString path);

    /// Path to currently open file
    wxFileName  mFilename;
};

#endif //REVERSER_MODEL_H
