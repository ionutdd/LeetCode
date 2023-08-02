//https://leetcode.com/problems/summary-ranges/
//25 minutes

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;

        if(nums.empty())
            return ans;

        int indexL = nums[0];
        int indexR = nums[0];

        if(nums.size() == 1)
            {
                ans.push_back(to_string(nums[0]));
                return ans;
            }
        for(int i = 1; i < nums.size(); i++)
        {
            if(indexR + 1 != nums[i]) //very tricky it overflows if we try if(nums[i] - indexR > 1)
                {
                    if(indexL == indexR)
                        ans.push_back(to_string(indexL));
                    else
                        ans.push_back(to_string(indexL) + "->" + to_string(indexR));

                    if (i == nums.size() - 1)
                        ans.push_back(to_string(nums[i]));

                    indexL = nums[i];
                    indexR = nums[i];
                }
            else
                {
                    indexR = nums[i];

                    if(i == nums.size() - 1)
                        ans.push_back(to_string(indexL) + "->" + to_string(indexR));
                }
        }
        return ans;
    }
};
