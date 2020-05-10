//
// Created by shanhai on 2020/5/8.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "../src/array/LeetCode_221_Maximal_Square.cpp"
TEST_CASE( "LeetCode_221_Maximal_Square", "[maximalSquare]" ) {
    std::vector<vector<char>> matrix = {
            {'0','0','1','0'},
            {'0','1','1','1'},
            {'0','1','1','1'},
            {'1','1','1','1'},
            {'1','1','1','1'},
            {'1','1','0','1'},
            {'1','1','0','1'}
    };
    Solution_221 s;
    int i = s.maximalSquare(matrix);
    cout << i <<endl;
}