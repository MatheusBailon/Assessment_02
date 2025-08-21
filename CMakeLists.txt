cmake_minimum_required(VERSION 3.10.0)
project(Assessment_02 VERSION 0.1.0 LANGUAGES C CXX)

include_directories(Assessment_02 PUBLIC Assessment_02/headers)

add_executable(Assessment_02 Assessment_02/source/Assessment_02.cpp Assessment_02/source/Book.cpp Assessment_02/headers/Book.h Assessment_02/headers/BookHelper.h Assessment_02/headers/DateTimeHelper.h)

# target_link_directories(Assessment_02 PUBLIC headers)
# target_link_libraries(Assessment_02 Assessment_02/source/Assessment_02.cpp)

include(CTest)
enable_testing()

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.8.1
  )

FetchContent_MakeAvailable(Catch2)

add_executable(tests tests/test.cpp)
target_link_libraries(tests Catch2::Catch2WithMain)