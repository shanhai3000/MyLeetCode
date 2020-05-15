cmake_minimum_required(VERSION 3.16)
project(MyLeetCode)

set(CMAKE_CXX_STANDARD 11)

set(HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/include)
set(ARRAY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/array)
set(TREE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/tree)
set(CALCULATE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/calculate)
set(STACK_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/stack)

set(ARRAY_SOURCES_FILE
        ${ARRAY_DIR}/LeetCode_221_Maximal_Square.cpp
        ${ARRAY_DIR}/LeetCode_5404_StackArray.cpp
        src/array/LeetCode_137_Single_Number_2.cpp)
set(TREE_SOURCES_FILE
        ${TREE_DIR}/LeetCode_236_Lowest_Common_Ancestor_of_a_Binary_Tree.cpp
        ${TREE_DIR}/LeetCode_102_LevelOrderTraversal.cpp
        )
set(CALCULATE_SOURCES_FILE
        ${CALCULATE_DIR}/LeetCode_50_Pow.cpp.cpp
        )
set(STACK_SOURCES_FILE
        ${STACK_DIR}/LeetCode_155_MinStack.cpp
        )
add_library(MyLeetCode ${ARRAY_SOURCES_FILE} ${TREE_SOURCES_FILE} ${STACK_SOURCES_FILE})

set(TEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/test)
set(SOURCES_TESTS
        ${TEST_DIR}/TestMain.cpp
        ${TEST_DIR}/Test_LeetCode_221_Maximal_Square.cpp
        ${TEST_DIR}/Test_LeetCode_5404_StackArray.cpp
        ${TEST_DIR}/Test_LeetCode_236_Lowest_Common_Ancestor_of_a_Binary_Tree.cpp
        ${TEST_DIR}/Test_LeetCode_50_Pow.cpp
        test/Test_LeetCode_102_LevelOrderTraversal.cpp test/Test_LeetCode_137_Single_Number_2.cpp)
add_executable(MyLeetCodeTest ${SOURCES_TESTS})