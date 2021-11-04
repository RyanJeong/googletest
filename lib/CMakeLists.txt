add_library(fact STATIC fact.cc)
target_include_directories(fact PUBLIC ${CMAKE_SOURCE_DIR}/includes)
target_compile_options(fact PRIVATE -Wall -Werror)

add_library(two STATIC two.cc)
target_include_directories(two PUBLIC ${CMAKE_SOURCE_DIR}/includes)
target_compile_options(two PRIVATE -Wall -Werror)