enable_testing()
file(GLOB TEST_SRC
  ${PROJECT_SOURCE_DIR}/tests/*.cc
  # other files will list here...
)

add_executable(tests ${TEST_SRC})

if (APPLE) 
  target_include_directories(tests PUBLIC /usr/local/include)
endif()

# Check gtest library
find_library(GTEST_LIB NAMES gtest)

# This is required for gtest library
find_package(Boost COMPONENTS filesystem thread REQUIRED)
set(BOOST_LIBS ${Boost_FILESYSTEM_LIBRARY} ${Boost_THREAD_LIBRARY} ${Boost_SYSTEM_LIBRARY})
find_package(Threads REQUIRED)


target_link_libraries(tests PRIVATE ${GTEST_LIB})
target_link_libraries(tests PUBLIC fact)
target_link_libraries(tests PUBLIC two)
target_include_directories(tests PUBLIC
  ${PROJECT_SOURCE_DIR}/third_party/json/single_include/
)

add_test(NAME test COMMAND tests)

#[[
if(CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang" AND CMAKE_BUILD_TYPE MATCHES "Debug")
    set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

    include(CodeCoverage)
    setup_target_for_coverage(sense_test_coverage tests coverage)

    SET(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
    SET(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
endif()
#]]