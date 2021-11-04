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

#include "two.hpp"

namespace my {
namespace two {
bool IsPowerOfTwo(int n) {
  if (n <= 1) {

    return false;
  } else {

    return (n & (n - 1)) == 0;
  }
}

int MultiplyByTwo(int n) { return n << 1; }

int DevideByTwo(int n) { return n >> 1; }
}  // namespace two
}  // namespace my
