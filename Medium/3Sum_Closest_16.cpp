//https://leetcode.com/problems/3sum-closest/
//30 minutes

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 100000;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                int currSum = nums[i] + nums[left] + nums[right];
                if (abs(target - currSum) < abs(target - ans))
                    ans = currSum;
                if (currSum == target)
                    return ans;
                if (currSum > target)
                    right--;
                else
                    left++;
            }
        }
        return ans;
    }
};
