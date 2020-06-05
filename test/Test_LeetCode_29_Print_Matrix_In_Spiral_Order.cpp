//
// Created by shanhai on 2020/6/5.
//

#include "catch.hpp"

#include "../src/array/LeetCode_29_Print_Matrix_In_Spiral_Order.cpp"

TEST_CASE("Solution_29", "[spiralOrder]"){
    Solution_29 s;
    vector<vector<int>> matrix = {{1,2,3,4,5},
                                   {2,3,4,5,6},
                                   {3,4,5,6,7},
                                   {4,5,6,7,8},
                                   {5,6,7,8,9}};
    vector<int> res = s.spiralOrder(matrix);
    for(int i = 0; i < res.size(); i++){
        cout << res[i];
    }

}
