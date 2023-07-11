//https://leetcode.com/problems/search-insert-position/
//20 minutes

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        bool ok = 1;
        int index_left = 0;
        int index_right = nums.size() - 1;
        int answer = 0;
        if (nums.size() == 1)
            {
                if (target == nums[0])
                    return 0;
                else if (target > nums[0])
                        return 1;
                return 0;
            }
        while (ok != 0)
        {
            if ((index_left + 1) == index_right)
                {
                    if (target == nums[index_left])
                        {
                            answer = index_left;
                            ok = 0;
                        }
                    if (target == nums[index_right])
                        {
                            answer = index_right;
                            ok = 0;
                        }
                    if (target != nums[index_left] && target != nums[index_right])
                        {
                            answer = index_right;
                            if (target > nums[nums.size() - 1])
                                answer = nums.size();
                            if (target < nums[0])
                                answer = 0;
                            ok = 0;
                        }
                }
            else if (target == nums[(index_right + index_left)/2])
                {
                    ok = 0;
                    answer = (index_right + index_left)/2;
                }
            else if (target < nums[(index_right + index_left)/2])
            {
                index_right = (index_right + index_left)/2;
            }
            else if (target > nums[(index_right + index_left)/2])
            {
                index_left = (index_right + index_left)/2;
            }
        }
        return answer;
    }
};
