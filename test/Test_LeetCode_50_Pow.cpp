//
// Created by shanhai on 2020/5/11.
//

#include "catch.hpp"

#include "../src/calculate/LeetCode_50_Pow.cpp"

TEST_CASE("LeetCode_50_Pow", "[myPow]"){
    Solution_50 s;
    double i = s.myPow(2.0, 6);
    cout << i << endl;

}