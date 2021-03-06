/*
    Copyright 2021 Ryan M. Jeong <ryan.m.jeong@hotmail.com>

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <gtest/gtest.h>

#include "fact.hpp"
#include "two.hpp"
#include "nlohmann/json.hpp"

using json = nlohmann::json;

TEST(FactorialTest, HandlesZeroInput) {
  EXPECT_EQ(my::fact::Factorial(0), 1);
}

// Tests factorial of positive numbers.
TEST(FactorialTest, HandlesPositiveInput) {
  EXPECT_EQ(my::fact::Factorial(1), 1);
  EXPECT_EQ(my::fact::Factorial(2), 2);
  EXPECT_EQ(my::fact::Factorial(3), 6);
  EXPECT_EQ(my::fact::Factorial(8), 40320);
}

TEST(TwoTest, HandlesOddInput) {
  EXPECT_EQ(my::two::IsPowerOfTwo(1), false);
  EXPECT_EQ(my::two::MultiplyByTwo(3), 6);
  EXPECT_EQ(my::two::DevideByTwo(3), 1);
}

TEST(TwoTest, HandlesEvenInput) {
  EXPECT_EQ(my::two::IsPowerOfTwo(2), true);
  EXPECT_EQ(my::two::MultiplyByTwo(4), 8);
  EXPECT_EQ(my::two::DevideByTwo(8), 4);
}

TEST(JsonTest, HandlesJsonObject) {
  json j = {
    {"pi", 3.141},
    {"happy", true},
    {"name", "Niels"},
    {"nothing", nullptr},
    {"answer", {
      {"everything", 42}
    }},
    {"list", {1, 0, 2}},
    {"object", {
      {"currency", "USD"},
      {"value", 42.99}
    }}
  };

  EXPECT_EQ(j["pi"], 3.141);
  EXPECT_EQ(j["happy"], true);
  EXPECT_EQ(j["name"], "Niels");
  EXPECT_EQ(j["nothing"], nullptr);
  EXPECT_EQ(j["answer"]["everything"], 42);
  EXPECT_EQ(j["list"][0], 1);
  EXPECT_EQ(j["list"][1], 0);
  EXPECT_EQ(j["list"][2], 2);
  EXPECT_EQ(j["object"]["currency"], "USD");
  EXPECT_EQ(j["object"]["value"], 42.99);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
