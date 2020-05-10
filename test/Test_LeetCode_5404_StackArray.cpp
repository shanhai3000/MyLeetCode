//
// Created by shanhai on 2020/5/10.
//
#include "../src/array/LeetCode_5404_StackArray.cpp"

#include "catch.hpp"

TEST_CASE( "LeetCode_5404_StackArray", "[buildArray]" ) {

    vector<int> target = {1,2,3};
    int n = 3;
    Solution_5404 s;
    vector<string> ans = s.buildArray(target, n);
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] <<endl;
    }
}