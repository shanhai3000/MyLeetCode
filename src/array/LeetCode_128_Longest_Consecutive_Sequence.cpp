//
// Created by shanhai on 2020/6/6.
//

#include "../include/ac_header.h"

class Solution_128 {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> num_map;
        int len = nums.size();
        for(int i = 0; i < len; ++i){
            if(num_map.count(nums[i]) < 1){
                num_map[nums[i]] = true;
            }
        }
        int cur_seq_num(0); int max_seq_num(0);int cur_num(0);
        for(int i = 0; i < len; ++i){
            cur_num = nums[i];
            //if n-1 exists, continue
            if(num_map.count(cur_num - 1) >= 1){
                continue;
            }else{
                // first num of a sequence, count the next in a loop
                cur_seq_num = 1;
                while(num_map.count(cur_num+1)){
                    cur_seq_num++;cur_num++;
                }
                if(cur_seq_num > max_seq_num) max_seq_num = cur_seq_num;
            }
        }
        return max_seq_num;
    }
};