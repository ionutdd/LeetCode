//https://leetcode.com/problems/permutations/
//30 minutes

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        if (nums.size() == 1)
            {
                ans.push_back({nums[0]});
                return ans;
            }
        backtrack(nums, 0, ans);
        return ans;
    }
private:
    void backtrack(vector<int>& nums, int start, vector<vector<int>> &ans) {
        if (start == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = start; i < nums.size(); i++)
        {
            swap(nums[i], nums[start]);
            backtrack(nums, start + 1, ans);
            swap(nums[start], nums[i]);
        }
    }
};
