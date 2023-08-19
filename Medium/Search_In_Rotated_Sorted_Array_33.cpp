//https://leetcode.com/problems/search-in-rotated-sorted-array/
//30 minutes
//Modified Binary Search required for this problem

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 1 && target == nums[0])
            return 0;
        if (nums.size() == 1 && target != nums[0])
            return -1;
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (target == nums[mid])
                return mid;
            if (nums[left] <= nums[mid])
                if (nums[left] <= target && nums[mid] >= target)
                    right = mid - 1;
                else
                    left = mid + 1;
            else
                if (nums[mid] <= target && target <= nums[right])
                    left = mid + 1;
                else
                    right = mid - 1;
        }
        return -1;
    }
};