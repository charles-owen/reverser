/**
 * @file Parts.h
 * @author Charles B. Owen
 *
 * Collection of parts
 *
 */

#ifndef REVERSER_PARTS_H
#define REVERSER_PARTS_H

#include <memory>
#include <string>
#include <map>

class wxXmlNode;
class Layouts;
class Symbols;
class Part;

/**
 * Collection of parts
 */
class Parts
{
public:
    Parts();

    bool Load(wxString path, Layouts *layouts, Symbols *symbols, bool silent=false);

    int NumLayouts() {return (int)mParts.size();}
    std::shared_ptr<Part> Get(const std::wstring &name);
    std::shared_ptr<Part> Get(const wxString &name) {return Get(name.ToStdWstring());}

private:
    void XmlPart(wxXmlNode* node, wxString path, Layouts *layouts, Symbols *symbols, bool silent);

    std::map<std::wstring, std::shared_ptr<Part>> mParts;

public:
    /** Iterator that iterates over the available parts */
    class Iter
    {
    public:
        /** Constructor
         * \param pos Position in the collection */
        Iter(std::map<std::wstring, std::shared_ptr<Part>>::iterator pos) : mPos(pos) {}

        /** Test for end of the iterator
         * \returns True if we this position equals not equal to the other position */
        bool operator!=(const Iter &other) const
        {
            return mPos != other.mPos;
        }

        /** Get value at current position
         * \returns Value at mPos in the collection */
        std::shared_ptr<Part> operator *() const { return mPos->second; }

        /** Increment the iterator
         * \returns Reference to this iterator */
        const Iter& operator++()
        {
            mPos++;
            return *this;
        }


    private:
        std::map<std::wstring, std::shared_ptr<Part>>::iterator mPos;
    };

    /** Get an iterator for the beginning of the collection
     * \returns Iter object at position 0 */
    Iter begin() { return Iter(mParts.begin()); }

    /** Get an iterator for the end of the collection
     * \returns Iter object at position past the end */
    Iter end() { return Iter(mParts.end()); }
};

#endif //REVERSER_PARTS_H
