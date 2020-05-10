//
// Created by shanhai on 2020/5/10.
//

#include "../include/ac_header.h"

class Solution_236 {
public:

    bool dfs(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode*& commonAncestor) {
        if(root == nullptr) return false;
        bool lson = dfs(root->left, p, q, commonAncestor);
        bool rson = dfs(root->right, p, q, commonAncestor);
        if((lson && rson) || (root->val == p->val || root->val == q->val) && (lson || rson)){
            commonAncestor = root;
        }
        return lson || rson || root->val == p->val || root->val == q->val;



        }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* commonAncestor = nullptr;
        dfs(root, p, q, commonAncestor);
        return commonAncestor;
    }

};
