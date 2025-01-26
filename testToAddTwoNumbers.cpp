#include "gtest/gtest.h"
#include "addNumbers.h"

TEST(AddNumbersTest, AddPositiveNumbers) {
    EXPECT_EQ(add(3, 4), 9);
}

TEST(AddNumbersTest, AddNegativeNumbers) {
    EXPECT_EQ(add(-3, -4), -7);
}

TEST(AddNumbersTest, AddZero) {
    EXPECT_EQ(add(0, 5), 5);
}
