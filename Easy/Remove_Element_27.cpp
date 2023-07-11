//https://leetcode.com/problems/remove-element/
//15 minutes

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int> nums2;
       int k = 0;
       for (int i = 0; i < nums.size(); i++)
       {
           if (nums[i] != val)
                {
                    nums2.push_back(nums[i]);
                    k++;
                }
       } 
       for (int i = 0; i < k; i++)
            nums[i] = nums2[i];
        nums.erase(nums.begin() + k, nums.end());
        return k;
    }
};
