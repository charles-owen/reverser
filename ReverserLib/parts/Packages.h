/**
 * @file Packages.h
 * @author Charles Owen
 *
 * The collection of packages (layout symbols)
 */

#ifndef REVERSER_PACKAGES_H
#define REVERSER_PACKAGES_H

class Package;

/**
 *  * The collection of packages (layout symbols)
 */
class Packages {
private:
    void XmlLibrary(wxXmlNode* node);
    void XmlPackages(wxXmlNode* node, std::wstring& libraryName);

    std::vector<std::shared_ptr<Package>> mPackages;

public:
    bool XmlLoad(wxXmlNode* root);

    std::shared_ptr<Package> Find(const std::wstring& library, const std::wstring& name);

};

#endif //REVERSER_PACKAGES_H
