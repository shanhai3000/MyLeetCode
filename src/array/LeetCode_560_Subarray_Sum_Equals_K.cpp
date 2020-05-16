//
// Created by shanhai on 2020/5/15.
//

#include "../include/ac_header.h"

class Solution_560 {
public:
    //1,2,1,2,1
    //1,3,4,6,7
    int subarraySum(vector<int> &nums, int k) {
        int n(0);
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0) {
                nums[i] += nums[i - 1];
            }
            if(m.count(nums[i] - k)){
                n+=m[nums[i] -k];
            }
            if(nums[i] == k) ++n;
            if(m.count(nums[i])){
                m[nums[i]]++;
            }else{
                m.insert({nums[i], 1});
            }
        }
        return n;
    }
};
