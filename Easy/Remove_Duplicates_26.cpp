//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//10 minutes

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> hash;
        int k = 0;
        for (int i = 0; i < size(nums); i++)
            if(hash[nums[i]] == 0)
                {
                    nums[k] = nums[i];
                    hash[nums[i]] += 1;
                    k += 1;
                }
        nums.erase(nums.begin()+k, nums.end());
        return k;
    }
};
