//https://leetcode.com/problems/jump-game-ii/
//25 minutes

class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() == 1)
            return 0;
        int jumps = 0;
        int next_max_jump = 0;
        int jump_end = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            next_max_jump = max(next_max_jump, i + nums[i]);
            if (i == jump_end)
            {
                jumps++;
                jump_end = next_max_jump;
            }
        }
        return jumps;
    }
};
