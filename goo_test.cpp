#include <gtest/gtest.h>
#include "goo.h"

// 
TEST(GooTest, TestGetValueWithZero) {
  RecordProperty("cpptest_filename", __FILE__);
  RecordProperty("req", "REQ-123-ZERO");
 
  EXPECT_EQ(getValue(0, 0), 0);
}

// 
TEST(GooTest, TestGetValueWithPositive) {
  RecordProperty("cpptest_filename", __FILE__);
  RecordProperty("req", "REQ-123-POSITIVE");

  EXPECT_EQ(getValue(5, 5), 25);
}

#if 1
// 
TEST(GooTest, TestGetValueWithPositive2) {
  RecordProperty("cpptest_filename", __FILE__);
  RecordProperty("req", "REQ-123-POSITIVE");

  EXPECT_EQ(getValue(0, 5), 5);
}

// 
TEST(GooTest, TestGetValueWithPositive3) {
  RecordProperty("cpptest_filename", __FILE__);
  RecordProperty("req", "REQ-123-POSITIVE");

  EXPECT_EQ(getValue(0, 0), 0);
}

// 
TEST(GooTest, TestGetValueWithPositive4) {
  RecordProperty("cpptest_filename", __FILE__);
  RecordProperty("req", "REQ-123-POSITIVE");

  EXPECT_EQ(getValue(9, 0), 9);
}
#endif
