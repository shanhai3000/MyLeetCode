//
// Created by shanhai on 2020/5/14.
//

#include "../include/ac_header.h"

class Solution_137 {
public:
    int singleNumber(vector<int> &nums) {
        map<int, int> m;
        vector<set<int>> s_list(3);
        for (int i = 0; i < nums.size(); ++i) {
            if (m.count(nums[i]) > 0) {
                s_list[m[nums[i]] - 1].erase(nums[i]);
                s_list[m[nums[i]]].insert(nums[i]);
                m[nums[i]]++;
            } else {
                m[nums[i]] = 1;
                s_list[0].insert(nums[i]);
            }
        }
        return *(s_list[0].begin());
    }
};
