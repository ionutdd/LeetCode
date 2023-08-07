//https://leetcode.com/problems/missing-number/
//2 minutes

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];

        int ans = (nums.size() * (nums.size() + 1)) / 2;
        return ans - sum;
    }
};
