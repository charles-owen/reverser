#include "gtest/gtest.h"
#include <wx/filefn.h>

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    wxSetWorkingDirectory(L"../..");
    return RUN_ALL_TESTS();
}