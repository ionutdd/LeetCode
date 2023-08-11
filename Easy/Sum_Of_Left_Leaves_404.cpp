//https://leetcode.com/problems/sum-of-left-leaves/
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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr)
            {
                sum += sumOfLeftLeaves(root->left) + root->left->val;
                if (root->right != nullptr)
                    sum += sumOfLeftLeaves(root->right);
            }
        else
            {
                if (root->right != nullptr)
                    sum += sumOfLeftLeaves(root->right);
                if (root->left != nullptr)
                    sum += sumOfLeftLeaves(root->left);
            }
        return sum;
    }
};
