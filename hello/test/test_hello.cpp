#include "gtest/gtest.h"
#include "hello/hello.h"

TEST(HelloTestSuite, HelloTest) {
  EXPECT_EQ(hello(), 1);
}
