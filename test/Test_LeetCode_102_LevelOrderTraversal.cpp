//
// Created by shanhai on 2020/5/13.
//

#include "catch.hpp"
#include "../src/tree/LeetCode_102_LevelOrderTraversal.cpp"

TEST_CASE("LeetCode_102_LevelOrderTraversal", "[levelOrder]"){
    Solution_102 s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    s.levelOrder(root);
}
