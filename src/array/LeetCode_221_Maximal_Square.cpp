//
// Created by shanhai on 2020/5/8.
//
#include "../include/ac_header.h"

class Solution_221 {
public:
    int maximalSquare0(vector<vector<char>> &matrix) {
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size()));
        int max_len(0);
        for (int row = 0; row < matrix.size(); ++row) {
            for (int col = 0; col < matrix[0].size(); ++col) {
                if (matrix[row][col] == '1') {
                    if(row == 0 || col == 0){
                        dp[row][col] = 1;
                    }else{
                        dp[row][col] = min(min(dp[row][col-1], dp[row-1][col-1]), dp[row-1][col])+1;
                        if(dp[row][col] > max_len){
                            max_len = dp[row][col];
                        }
                    }
                }
            }
        }
        return max_len * max_len;
    }
    int maximalSquare(vector<vector<char>> &matrix) {
        int max_length = 0;
        for (int row = 0; row < matrix.size(); ++row) {
            for (int col = 0; col < matrix[0].size(); ++col) {
                if (matrix[row][col] == '1') {
                    dfs(matrix, row, col, 1, 0, 1, &max_length);
                }
            }
        }
        return max_length * max_length;
    }
    //greedy
    void dfs(vector<vector<char>> &matrix, int row, int col, int cur_max_row_len, int cur_max_col_len, int cur_length,
             int *max_length) {
        if (row == matrix.size() || col == matrix[0].size()) {
            if (cur_length > *max_length) {
                *max_length = cur_length;
            }
            return;
        }
        int cur_row_len_delta = 0;int cur_col_len_delta = 0;
        int min_common_length = 0;
        for (int i = col + 1; i < matrix[0].size(); ++i) {
            if (matrix[row][i] == '1') {
                cur_row_len_delta++;
            } else {
                break;
            }
        }
        for (int i = row + 1; i < matrix.size(); ++i) {
            if (matrix[i][col] == '1') {
                cur_col_len_delta++;
            } else {
                break;
            }
        }
        if (cur_max_col_len == 0) {
            cur_max_col_len = cur_col_len_delta + 1;
        } else {
            cur_max_col_len = min(cur_col_len_delta + 1, cur_max_col_len);
        }
        min_common_length = min(cur_max_row_len + cur_row_len_delta, cur_max_col_len);
        if(min_common_length > cur_length){
            dfs(matrix, row, col + 1, cur_max_row_len + 1, cur_max_col_len, cur_length+1, max_length);
        }else{
            if(min_common_length > *max_length){
                *max_length = min_common_length;
            }
        }
    }
};
