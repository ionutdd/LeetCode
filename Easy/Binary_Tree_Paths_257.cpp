https://leetcode.com/problems/binary-tree-paths/
//20 minutes

//Great problem to highlight DFS


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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;

        if (root == nullptr)
            return paths;

        dfs(root, "" , paths);
        return paths;
    }

    void dfs(TreeNode* root, string currentPath, vector<string>& paths)
    {
        if (root == nullptr)
            return;

        if(!currentPath.empty())
            currentPath += "->";

        currentPath += to_string(root->val); 

        if(root->left == nullptr && root->right == nullptr)
            {
                paths.push_back(currentPath);
                return;
            }

        dfs(root->left, currentPath, paths);
        dfs(root->right, currentPath, paths);
    }
};
