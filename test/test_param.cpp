#include "gtest/gtest.h"
#include "func.hpp"
#include <iostream>

class Myclass
{
public:
    Myclass() { std::cout << "construcotr \n"; }
    ~Myclass() { std::cout << "destructor \n"; }
};
struct my_fixture : public testing::TestWithParam<int>
{
    // Myclass myclass;

    void SetUp()
    {
        // std::cout << "setup \n";
    }

    void TearDown()
    {
        // std::cout << "Tear down \n";
    }
};

TEST_P(my_fixture, case_1)
{
    int in = GetParam();
    if(in ==1989){
    EXPECT_EQ(in,-in);

    }else{

    EXPECT_EQ(in,in);
    }
}

TEST_P(my_fixture, case_2)
{
    int in = GetParam();
    if(in ==2013){
    EXPECT_EQ(in,-in);

    }else{

    EXPECT_EQ(in,in);
    }
}

INSTANTIATE_TEST_CASE_P(
        uniqueName,
        my_fixture,
        ::testing::Values(
                1, 711, 1989, 2013
        ));

INSTANTIATE_TEST_CASE_P(
        anothername,
        my_fixture,
        ::testing::Values(
                1, 711, 1989, 2013
        ));