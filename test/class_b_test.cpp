#include "class_b.h"
#include <gtest/gtest.h>

TEST(SumB1, normal) {
  ClassB target;
  ASSERT_EQ(3, target.SumB1(1, 2));
}

TEST(SumB2, normal) {
  ClassB target;
  ASSERT_EQ(3, target.SumB2(1, 2));
}
