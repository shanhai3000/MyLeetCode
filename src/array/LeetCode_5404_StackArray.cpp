//
// Created by shanhai on 2020/5/10.
//

#include "../include/ac_header.h"

class Solution_5404 {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int i (1), target_idx(0);
        vector<string> ans;
        while(i <= n && i <= target[target.size()-1]){
            ans.emplace_back("Push");
            if(target[target_idx] != i){
                ans.emplace_back("Pop");
            }else{
                ++target_idx;
            }
            i++;
        }
        return ans;
    }
};
