file(GLOB SRC_FILES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

add_executable(program ${SRC_FILES})
target_link_libraries(program PUBLIC fact)
target_link_libraries(program PUBLIC two)
target_include_directories(program PUBLIC
  ${PROJECT_SOURCE_DIR}/third_party/json/single_include/
)