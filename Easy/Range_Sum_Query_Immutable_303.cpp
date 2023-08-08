//https://leetcode.com/problems/range-sum-query-immutable/
//25 minutes

class NumArray {
private: 
    vector<int> prefixSum;
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefixSum.resize(n + 1);
        prefixSum[0] = 0;
        for (int i = 1; i <= n; i++)
            prefixSum[i] = nums[i - 1] + prefixSum[i - 1];
    }
    
    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
