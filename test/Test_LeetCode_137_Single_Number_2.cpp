//
// Created by shanhai on 2020/5/15.
//

#include "catch.hpp"

#include "../src/array/LeetCode_137_Single_Number_2.cpp"

TEST_CASE("LeetCode_137_Single_Number_2", "[singleNumber]"){
    Solution_137 s;
    vector<int> nums = {1,1,1,2,2,2,3,4,3,3};
    int ans = s.singleNumber(nums);
    cout << ans <<endl;
}
