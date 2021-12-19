/**
 * @file LibraryItem.h
 * @author Charles Owen
 *
 * Base class for items that are a member of a library.
 */

#ifndef REVERSER_LIBRARYITEM_H
#define REVERSER_LIBRARYITEM_H

/**
 * Base class for items that are a member of a library.
 */
class LibraryItem {
private:
    /// Library items are members of libraries
    std::wstring mLibrary;

    /// Library items have a name (unique only to the library)
    std::wstring mName;

public:
    LibraryItem(wxXmlNode* node, const std::wstring& libraryName);

    /**
     * Get the library name for this item
     * @return Library name
     */
    auto GetLibrary() {return mLibrary;}

    /**
     * Get the name of the item within the library
     * @return Item name
     */
    auto GetName() {return mName;}

    /**
     * Is this an indicated library item?
     * @param libraryName Library name to test
     * @param name Item name to test
     * @return True if this item has the specified library name and item name
     */
    bool IsItem(const std::wstring& libraryName, const std::wstring& name)
    {
        return libraryName == mLibrary && name == mName;
    }
};

#endif //REVERSER_LIBRARYITEM_H
