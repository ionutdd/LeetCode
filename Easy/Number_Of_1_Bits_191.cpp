//https://leetcode.com/problems/number-of-1-bits/
//2 minutes; Beats 100% of users in time complexity

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int answer = 0;
        for (int i = 0; i < 32; i++)
        {
            if ((n & 1) == 1)
                answer++;
            n = n >> 1;
        }
        return answer;
    }
};
