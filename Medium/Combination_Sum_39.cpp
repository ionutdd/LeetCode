//https://leetcode.com/problems/combination-sum/
//25 minutes

//This is a Dynamic Programming solution, utilizing a 3D array
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
    sort(candidates.begin(), candidates.end());
    vector<vector<vector<int>>> dp(target + 1);
    dp[0].push_back({});

    for (int i = 1; i <= target; i++) 
        for (int num : candidates) 
            if (i - num >= 0) 
                for (vector<int> comb : dp[i - num]) 
                {
                    if (comb.empty() || num >= comb.back()) 
                    { 
                        vector<int> newComb = comb;
                        newComb.push_back(num);
                        dp[i].push_back(newComb);
                    }
                }

    return dp[target];
    }
};
