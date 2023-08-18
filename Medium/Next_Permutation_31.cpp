//https://leetcode.com/problems/next-permutation/
//30 minutes

//Very smart way to get the next lexicographic permutation (O(n))

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool isDescending = true;
        for (int i = 1; i < nums.size(); i++)
            if (nums[i] > nums[i - 1])
                isDescending = false;
        if (isDescending == true)
            for (int i = 0; i < nums.size() / 2; i++)
                swap(nums[i], nums[nums.size() - i - 1]);
        else
        {
            int k = 0;
            for (int i = nums.size() - 2; i >= 0; i--)
                if (nums[i] < nums[i + 1])
                    {
                        k = i;
                        break;
                    }
            int l = 0;
            for (int j = nums.size() - 1; j >= 0; j--)
                if (nums[j] > nums[k])
                    {
                        l = j;
                        swap(nums[k], nums[l]);
                        break;
                    }
            reverse(nums.begin() + k + 1, nums.end());
        }
    }
};
