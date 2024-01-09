#include <gtest/gtest.h>
#include <lib/lib.hpp>

TEST (LibTest, BasicAssertions)
{
  EXPECT_EQ (lib::return_five (), 5);
  EXPECT_EQ (lib::is_odd (1), true);
}
