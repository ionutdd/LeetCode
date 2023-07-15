//https://leetcode.com/problems/climbing-stairs/
//5 minutes, perfect solution

class Solution {
public:
    int climbStairs(int n) {
        vector <int> solution;
        solution.push_back(1);
        solution.push_back(2);
        for (int i = 2; i < 45; i++)
        {
            solution.push_back(solution[i-1] + solution[i-2]);
        }    
        return solution[n-1];
    }
};
