if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
  cmake_minimum_required(VERSION 3.16)
  project(capturer VERSION 0.1.0 LANGUAGES C CXX)
  set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
  set(CMAKE_CXX_STANDARD 20 CACHE STRING "C++ standard to use")
  set(CMAKE_CXX_STANDARD_REQUIRED ON CACHE BOOL "Require the selected C++ standard")
  set(CMAKE_CXX_EXTENSIONS OFF CACHE BOOL "Disable compiler-specific C++ extensions")
endif()

add_executable(thread_practice_1 main.cpp)

include(CTest)
enable_testing()
