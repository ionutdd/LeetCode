//https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    std::vector<int> postorderTraversal(TreeNode* root) {
        std::vector<int> result;
        postorderTraversalRecursive(root, result);
        return result;
    }

private:
    void postorderTraversalRecursive(TreeNode* node, std::vector<int>& result) {
        if (node == nullptr)
            return;

        // Traverse left subtree
        postorderTraversalRecursive(node->left, result);

        // Traverse right subtree
        postorderTraversalRecursive(node->right, result);

        // Process the current node (root) after its children
        result.push_back(node->val);
    }
};
