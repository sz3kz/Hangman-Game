# project name:         <PROJECT_NAME>
# languages used:       <LANGUAGES_USED>
#   * CXX
#   * CUDA
# package version:      <PACKAGE_VERSION>
# c++ standard:         <C++_STANDARD>
#   * 17
# executable target:    <EXECUTABLE_TARGET>
# header directory:     <HEADER_DIRECTORY>
# list of source files: <SRC_FILES>

cmake_minimum_required(VERSION 3.15...4.1)

set(CMAKE_CXX_STANDARD <C++_STANDARD>)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/external/boilerplate/CPP")
include(add_valgrind_test)
include(add_cpp_compile_options)
include(add_cuda_compile_options)

project(
  <PROJECT_NAME>
  VERSION <PACKAGE_VERSION>
  LANGUAGES <LANGUAGES_USED>
)

add_executable(<EXECUTABLE_TARGET>)

add_cpp_compile_options(<EXECUTABLE_TARGET>)
add_cuda_compile_options(<EXECUTABLE_TARGET>)
include(CTest)
if(BUILD_TESTING)
  find_program(MEMCHECK valgrind)
  add_valgrind_test(<EXECUTABLE_TARGET>)
endif()

target_include_directories(<EXECUTABLE_TARGET> PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/<HEADER_DIRECTORY>
)

target_sources(<EXECUTABLE_TARGET> PRIVATE
  <SRC_FILES>
)
