#include "../arith.hpp"
#include <gtest/gtest.h>

TEST(add, meaningless) {
    EXPECT_EQ(2, add(1, 1));
}

