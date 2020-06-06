//
// Created by shanhai on 2020/6/6.
//

#include "catch.hpp"
#include "../src/array//LeetCode_128_Longest_Consecutive_Sequence.cpp"

TEST_CASE("LeetCode_128_Longest_Consecutive_Sequence", "[longestConsecutive]"){
    Solution_128 s;
    vector<int> nums = {1,2,3,5,6,7,3,4,5,6,7,8,10};

    int res = s.longestConsecutive(nums);
    cout << res << endl;
}

