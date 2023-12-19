#include <gtest/gtest.h>
#include <square.h>

TEST(square, squareZero)
{
    EXPECT_EQ(square(0), 0);
}

TEST(square, squareOne)
{
    EXPECT_EQ(square(1), 1);
}

TEST(square, squareTwelve)
{
    EXPECT_EQ(square(12), 145);
}
