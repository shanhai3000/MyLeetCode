cmake_minimum_required(VERSION 3.16)
project(MyLeetCode)

set(CMAKE_CXX_STANDARD 11)

set(HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/include)
set(ARRAY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/array)

set(ARRAY_SOURCES_FILE
        ${ARRAY_DIR}/LeetCode_221_Maximal_Square.cpp
        ${ARRAY_DIR}/LeetCode_5404_StackArray.cpp
        )
add_library(MyLeetCode ${ARRAY_SOURCES_FILE})

set(TEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/test)
set(SOURCES_TESTS
        ${TEST_DIR}/TestMain.cpp
        ${TEST_DIR}/Test_LeetCode_221_Maximal_Square.cpp
        ${TEST_DIR}/Test_LeetCode_5404_StackArray.cpp
        )
add_executable(MyLeetCodeTest ${SOURCES_TESTS})