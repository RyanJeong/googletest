# googletest
A repo. for practice GoogleTest

## Output:
```text
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from FactorialTest
[ RUN      ] FactorialTest.HandlesZeroInput
[       OK ] FactorialTest.HandlesZeroInput (0 ms)
[ RUN      ] FactorialTest.HandlesPositiveInput
[       OK ] FactorialTest.HandlesPositiveInput (0 ms)
[----------] 2 tests from FactorialTest (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 2 tests.
```

## Installation without using Homebrew:
```text
$ git clone https://github.com/google/googletest
$ cd googletest
$ mkdir build
$ cd build
$ cmake ..
$ make
$ make install
```

## Reference:
* [Googletest Primer](https://github.com/google/googletest/blob/master/docs/primer.md)
* [Assertions Reference](https://github.com/google/googletest/blob/master/docs/reference/assertions.md)
* [Naming Functions and Classes](https://google.github.io/styleguide/cppguide.html#Function_Names)
* [Googletest FAQ](https://github.com/google/googletest/blob/master/docs/faq.md)
* [Advanced googletest Topics](https://github.com/google/googletest/blob/master/docs/advanced.md)
