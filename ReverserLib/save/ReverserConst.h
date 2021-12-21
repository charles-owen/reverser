/**
 * @file RecurserConst.h
 * @author Charles B. Owen
 *
 *
 * Recurser system constants
 */

#ifndef REVERSER_REVERSERCONST_H
#define REVERSER_REVERSERCONST_H

class ReverserConst
{
public:
    /// Location for program data
    static constexpr wchar_t const *LibDir = L"lib/";

    /// Layout files directory
    static constexpr wchar_t const *LayoutsDir = L"layouts/";

    /// Layouts file
    static constexpr wchar_t const *LayoutsFile = L"layouts.xml";

    /// Extension for layout filename
    static constexpr wchar_t const *LayoutExt = L".xml";

    /// Part files directory
    static constexpr wchar_t const *PartsDir = L"parts/";

    /// Parts file
    static constexpr wchar_t const *PartsFile = L"parts.xml";

    /// Extension for part filename
    static constexpr wchar_t const *PartExt = L".xml";

};

#endif //REVERSER_REVERSERCONST_H
