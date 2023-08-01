//https://leetcode.com/problems/invert-binary-tree/
//10 minutes

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr)
            return root;
        if (root->left == nullptr && root->right == nullptr)
            return root;
        
        TreeNode* aux;
        aux = root->right;
        root->right = root->left;
        root->left = aux;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
