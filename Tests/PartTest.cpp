
#include "gtest/gtest.h"
#include "save/Part.h"

#include "save/Layouts.h"
#include "save/Symbols.h"

class PartTestFixture : public testing::Test
{
protected:
    virtual void SetUp()
    {
        // Load example layout data
        layouts.Load(L"Tests/test-lib/", true);
    }

    virtual void TearDown()
    {
    }

    Layouts layouts;
    Symbols symbols;
};

TEST_F(PartTestFixture, Load)
{
    Part part;

    EXPECT_TRUE(part.Load(L"Tests/test-lib/", L"resistor-18", &layouts, &symbols, true));

}