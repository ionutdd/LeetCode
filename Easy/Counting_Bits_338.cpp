//https://leetcode.com/problems/counting-bits/
//20 minutes for follow up such that O(n) and no built in functions are used

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int powerOfTwo = 0;
        ans.push_back(0);
        if (n == 0)
            return ans;
        ans.push_back(1);
        if (n == 1)
            return ans;
        for (int i = 2; i <= n; i++)
            {
                if ((i & (i - 1)) == 0)
                {
                    powerOfTwo = i;
                    ans.push_back(1);
                }
                else
                    ans.push_back(ans[i - powerOfTwo] + 1);
            }
        return ans;
    }
};
