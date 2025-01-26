// test_addition.cpp
#include <gtest/gtest.h>
#include "addition.h"

// Test case for the add function
TEST(AdditionTest, PositiveNumbers) {
    EXPECT_EQ(Adder::add(3, 5), 8);  // Test adding 3 + 5
}

TEST(AdditionTest, NegativeNumbers) {
    EXPECT_EQ(Adder::add(-3, -5), -8);  // Test adding -3 + -5
}

TEST(AdditionTest, MixedNumbers) {
    EXPECT_EQ(Adder::add(-3, 5), 2);  // Test adding -3 + 5
}

TEST(AdditionTest, Zero) {
    EXPECT_EQ(Adder::add(0, 0), 0);  // Test adding 0 + 0
    EXPECT_EQ(Adder::add(0, 5), 5);  // Test adding 0 + 5
}
