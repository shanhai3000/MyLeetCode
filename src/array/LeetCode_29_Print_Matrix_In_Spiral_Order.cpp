//
// Created by shanhai on 2020/6/5.
//

#include "../include/ac_header.h"

class Solution_29 {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int max_row = matrix.size();
        vector<int> res;
        if(max_row == 0){
            return res;
        }
        int max_col = matrix[0].size();
        int lt[2] = {0, 0};
        int rt[2] = {0, max_col};
        int lb[2] = {max_row, 0};
        int rb[2] = {max_row, max_col};

        int cur_row(0), cur_col(0);

        while( res.size() < (max_row*max_col) && (lt[1] < rt[1] || rt[0] < rb[0] || rb[1] > lb[1] || lb[0] > lt[0] )){
            while(cur_col < max_col){
                if(matrix[cur_row][cur_col] != INT_MIN){
                    res.push_back(matrix[cur_row][cur_col]);
                    matrix[cur_row][cur_col] = INT_MIN;
                    ++cur_col;
                }else{
                    break;
                }
            }
            --cur_col;
            ++cur_row;
            lt[0]++;lt[1]++;// right  over
            while(cur_row < max_row){
                if(matrix[cur_row][cur_col] != INT_MIN){
                    res.push_back(matrix[cur_row][cur_col]);
                    matrix[cur_row][cur_col] = INT_MIN;
                    ++cur_row;
                }else{
                    break;
                }
            }
            --cur_row;
            --cur_col;
            rt[0]++;rt[1]--;// down over
            while(cur_col >= 0){
                if(matrix[cur_row][cur_col] != INT_MIN){
                    res.push_back(matrix[cur_row][cur_col]);
                    matrix[cur_row][cur_col] = INT_MIN;
                    --cur_col;
                }else{
                    break;
                }
            }
            ++cur_col;
            --cur_row;
            rb[0]--;rb[1]++;// left over

            while(cur_row >= 0){
                if(matrix[cur_row][cur_col] != INT_MIN){
                    res.push_back(matrix[cur_row][cur_col]);
                    matrix[cur_row][cur_col] = INT_MIN;
                    --cur_row;
                }else{
                    break;
                }
            }
            ++cur_row;++cur_col;

            lb[0]--;lb[1]++;// up over
        }

        return res;
    }
};
