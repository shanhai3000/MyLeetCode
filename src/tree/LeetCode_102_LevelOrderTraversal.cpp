//
// Created by shanhai on 2020/5/13.
//

#include "../include/ac_header.h"


class Solution_102 {
public:
    //Line 923: Char 9: runtime error: reference binding to null pointer of type 'std::vector<int, std::allocator<int> >' (stl_vector.h)
    //SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior /usr/bin/../lib/gcc/x86_64-linux-gnu/8/../../../../include/c++/8/bits/stl_vector.h:933:9
    vector<vector<int>> levelOrder(TreeNode *root) {
        vector<vector<int>> ans;
        levelOrder(root, 0, ans);
        return ans;
    }

    void levelOrder(TreeNode *root, int depth, vector<vector<int>> &ans) {
        if (root != nullptr) {
            if (ans.size() <= depth) {
                vector<int> _ans;
                ans.push_back(_ans);
            }
            ans[depth].push_back(root->val);
            levelOrder(root->left, depth + 1, ans);
            levelOrder(root->right, depth + 1, ans);
        }
    }
};
