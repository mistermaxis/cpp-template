#include <gtest/gtest.h>
#include "cpp-template/template-class.hpp"

class TemplateTest : public ::testing::Test
{
protected:
  template_namespace::TemplateClass source_1;
  template_namespace::TemplateClass source_2;
  template_namespace::TemplateClass result;
};

TEST_F(TemplateTest, AddTwoPositive)
{
  source_1 = {13, 3};
  source_2 = {5, 6};
  result = template_namespace::add(source_1, source_2);
  EXPECT_EQ(result.a, 18);
  EXPECT_EQ(result.b, 9);
}

TEST_F(TemplateTest, AddPositiveAndNegative)
{
  source_1 = {-13, -3};
  source_2 = {5, 6};
  result = template_namespace::add(source_1, source_2);
  EXPECT_EQ(result.a, -8);
  EXPECT_EQ(result.b, 3);
}

TEST_F(TemplateTest, AddTwoNegative)
{
  source_1 = {-13, -3};
  source_2 = {-25, -6};
  result = template_namespace::add(source_1, source_2);
  EXPECT_EQ(result.a, -38);
  EXPECT_EQ(result.b, -9);
}