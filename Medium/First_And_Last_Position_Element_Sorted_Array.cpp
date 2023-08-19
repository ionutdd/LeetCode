//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//30 minutes

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        if (nums.size() == 0)
            return ans;
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target)
                left = mid + 1;
            if (nums[mid] > target)
                right = mid - 1;
            if (nums[mid] == target)
            {
                int truemid = mid;
                int left = 0;
                int right = mid;
                while (left <= right) 
                {
                    int mid = left + (right - left) / 2;
                    if (nums[mid] == target) 
                    {
                        ans[0] = mid;  
                        right = mid - 1;  
                    } 
                    else 
                        left = mid + 1; 
                    
                }
                left = truemid;
                right = nums.size() - 1;
                mid = truemid;
                while (left <= right)
                {
                    int mid = left + (right - left) / 2;
                    if (nums[mid] == target) {
                        ans[1] = mid;  
                        left = mid + 1;  
                    } 
                    else 
                        right = mid - 1; 
                }
                return ans;
            }
        }   
        return ans;
    }
};
