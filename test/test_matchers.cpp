#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <string>
#include "func.hpp"
using testing::AllOf;
using testing::Gt;
using testing::Lt;



TEST(TEST_SUIT1, TESTCASE1)
{

    std::string my_string = "hello there";
    EXPECT_THAT(my_string, testing::StartsWith("hs"));
}

TEST(TEST_SUIT1, TESTCASE2)
{

    int x = 12;
    EXPECT_THAT(x, AllOf(Lt(13),Gt(2)));
}

TEST(TEST_SUIT1, TESTCASE3)
{

    int x = 14;
    EXPECT_THAT(x, AllOf(Lt(13),Gt(2)));
}