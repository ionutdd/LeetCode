//https://leetcode.com/problems/power-of-four/
//5 minutes

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0)
            return false;
        if (n == 1)
            return true;
        double ans;
        ans = log(n) / log(4);
        return abs(ans - ceil(ans)) < 1e-10;
    }
};
