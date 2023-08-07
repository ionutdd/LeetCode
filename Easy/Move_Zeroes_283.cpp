//https://leetcode.com/problems/move-zeroes/
//10 minutes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int counter = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                counter++;
            else
            {
                if(counter != 0)
                    swap(nums[i], nums[i - counter]);
            }
        }
    }
};
