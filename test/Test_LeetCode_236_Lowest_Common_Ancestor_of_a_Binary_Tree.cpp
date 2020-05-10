//
// Created by shanhai on 2020/5/10.
//

#include "catch.hpp"

#include "../src/tree/LeetCode_236_Lowest_Common_Ancestor_of_a_Binary_Tree.cpp"

TEST_CASE("LeetCode_236_Lowest_Common_Ancestor_of_a_Binary_Tree", "[lowestCommonAncestor]"){
    Solution_236 s;
    TreeNode* root;TreeNode* p;TreeNode* q;
    root = new TreeNode(-1);
    root->left = new TreeNode(0);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(-2);
    root->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(8);


    p = new TreeNode(8);q = new TreeNode(4);
    TreeNode* ans = s.lowestCommonAncestor(root, p, q);
    cout << ans->val <<endl;
}