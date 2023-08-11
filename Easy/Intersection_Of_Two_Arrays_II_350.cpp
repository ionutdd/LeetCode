//https://leetcode.com/problems/intersection-of-two-arrays-ii/
//5 minutes

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> hash;
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
            hash[nums1[i]]++;
        for (int i = 0; i < nums2.size(); i++)
            if(hash[nums2[i]] != 0)
            {
                hash[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        return ans;
    }
};
