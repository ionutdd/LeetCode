//https://leetcode.com/problems/3sum/submissions/
//30 minutes

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int, int> hash;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
            {
                hash[nums[i]] = i;
            }
        for (int i = 0; i < nums.size() - 2; i++)
            {
                for (int j = i + 1; j < nums.size() - 1; j++)
                    {
                        if (hash.find(0 - nums[i] - nums[j]) != hash.end() && hash[0 - nums[i] - nums[j]] > j)
                            {
                                ans.push_back({nums[i], nums[j], 0 - nums[i] - nums[j]});
                            }
                        while (nums[j + 1] == nums[j] && j < nums.size() - 2)
                            j++;
                    }
                while (nums[i + 1] == nums[i] && i < nums.size() - 3)
                    i++;
            }
        return ans;
    }
};
