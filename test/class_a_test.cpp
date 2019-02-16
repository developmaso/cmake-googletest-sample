#include "class_a.h"
#include <gtest/gtest.h>

TEST(SumA1, normal) {
  ClassA target;
  ASSERT_EQ(3, target.SumA1(1, 2));
}

TEST(SumA2, normal) {
  ClassA target;
  ASSERT_EQ(3, target.SumA2(1, 2));
}
