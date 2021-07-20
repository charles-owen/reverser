/**
 * @file Components.h
 * @author Charles B. Owen
 *
 * Collection of components in this model.
 *
 */

#ifndef REVERSER_COMPONENTS_H
#define REVERSER_COMPONENTS_H

#include <memory>
#include <string>
#include <vector>

class Component;
class wxXmlNode;
class Parts;

/**
 * Collection of components in this model.
 */
class Components
{
public:

    std::shared_ptr<Component> Get(const std::wstring &number);

    std::wstring NextFree(const std::wstring &prefix);

    void Add(std::shared_ptr<Component> component);
    void Delete(std::shared_ptr<Component> component);


    void XmlSave(wxXmlNode *node);
    void XmlLoad(wxXmlNode *node, Parts *parts);

private:
    std::vector<std::shared_ptr<Component>> mComponents;
};

#endif //REVERSER_COMPONENTS_H
