# googletest
A repo. for practice GoogleTest

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

## Output:
```text
[==========] Running 5 tests from 3 test suites.
[----------] Global test environment set-up.
[----------] 2 tests from FactorialTest
[ RUN      ] FactorialTest.HandlesZeroInput
[==========] Running 5 tests from 3 test suites.
[----------] Global test environment set-up.
[----------] 2 tests from FactorialTest
[ RUN      ] FactorialTest.HandlesZeroInput
[       OK ] FactorialTest.HandlesZeroInput (0 ms)
[ RUN      ] FactorialTest.HandlesPositiveInput
[       OK ] FactorialTest.HandlesPositiveInput (0 ms)
[----------] 2 tests from FactorialTest (0 ms total)

[----------] 2 tests from TwoTest
[ RUN      ] TwoTest.HandlesOddInput
[       OK ] TwoTest.HandlesOddInput (0 ms)
[ RUN      ] TwoTest.HandlesEvenInput
[       OK ] TwoTest.HandlesEvenInput (0 ms)
[----------] 2 tests from TwoTest (0 ms total)

[----------] 1 test from JsonTest
[ RUN      ] JsonTest.HandlesJsonObject
[       OK ] JsonTest.HandlesJsonObject (0 ms)
[----------] 1 test from JsonTest (0 ms total)

[----------] Global test environment tear-down
[==========] 5 tests from 3 test suites ran. (0 ms total)
[  PASSED  ] 5 tests.
```

## Reference:
* [Googletest Primer](https://github.com/google/googletest/blob/master/docs/primer.md)
* [Assertions Reference](https://github.com/google/googletest/blob/master/docs/reference/assertions.md)
* [Naming Functions and Classes](https://google.github.io/styleguide/cppguide.html#Function_Names)
* [Googletest FAQ](https://github.com/google/googletest/blob/master/docs/faq.md)
* [Advanced googletest Topics](https://github.com/google/googletest/blob/master/docs/advanced.md)
