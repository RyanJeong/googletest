add_library(fact STATIC fact.cc)
target_include_directories(fact PUBLIC ${CMAKE_SOURCE_DIR}/includes)
target_compile_options(fact PRIVATE -Wall -Werror)