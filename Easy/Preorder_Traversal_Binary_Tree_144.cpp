//https://leetcode.com/problems/binary-tree-preorder-traversal/
//15 minutes

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
    std::vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int> result;
        preorderTraversalRecursive(root, result);
        return result;
    }

private:
    void preorderTraversalRecursive(TreeNode* node, std::vector<int>& result) {
        if (node == nullptr)
            return;

        // Process the current node (root) before its children
        result.push_back(node->val);

        // Traverse left subtree
        preorderTraversalRecursive(node->left, result);

        // Traverse right subtree
        preorderTraversalRecursive(node->right, result);
    }
};
