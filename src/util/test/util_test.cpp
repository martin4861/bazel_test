#include <gmock/gmock.h>
#include "util/util.hpp"

TEST(Foo, Bar) 
{
    EXPECT_THAT(true, ::testing::IsTrue());
}


TEST(Foo, Pow2)
{
    EXPECT_THAT(pow2(30.0), ::testing::Eq(3.0*3.0));
}
