#include "gtest/gtest.h"

#include <wx/filename.h>

TEST(EmptyTest, ExampleTest){

    auto designPath = std::wstring(L"/Users/charlesowen/OneDrive/Personal/kennedy/electrovalue/test.rvsr");
    auto path = std::wstring(L"/Users/charlesowen/OneDrive/Personal/kennedy/electrovalue/sch/some file.sch");

    wxFileName dp(designPath);
    auto dirPath = dp.GetPath();

    wxFileName p(path);
    p.MakeRelativeTo(dirPath);

    auto path1 = p.GetFullPath();

    wxString path2;
    wxConcatFiles(dirPath, path1, path2);



//    auto dir = wxFileName::DirName(designPath);
//    auto dirPath = dir.GetFullPath();

    ASSERT_EQ(7, 7);
}
