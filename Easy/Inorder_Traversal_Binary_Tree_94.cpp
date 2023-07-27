//https://leetcode.com/problems/binary-tree-inorder-traversal/
//25 minutes

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
    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> result;
        std::stack<TreeNode*> nodeStack;

        TreeNode* curr = root;

        while (curr != nullptr || !nodeStack.empty()) {
            while (curr != nullptr) {
                nodeStack.push(curr);
                curr = curr->left;
            }

            curr = nodeStack.top();
            nodeStack.pop();

            result.push_back(curr->val);
            curr = curr->right;
        }

        return result;
    }
};
