
#include "gtest/gtest.h"
#include "components/Part.h"

#include "components/Layouts.h"
#include "components/Symbols.h"

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