//https://leetcode.com/problems/power-of-three/
//30 minutes for O(1)

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
            return false;
        if (n == 1)
            return true;
        if ((n & 1) == 0)
            return false;

        double ans = log(n) / log(3); //here we calculate the log of base 3 of n

        if (abs(round(ans) - ans) < 1e-10) // we want to check if the difference is small enough to be insignificant, therefore it will mean that our n is power of three
            return true;

        return false;


        //another smart solution would be something like this:
        //return (n>0) && (1162261467 % n == 0);
        //this checks if n is positive and if 3^19(largest power of n lower than 2^31) is divisible by n which happens only if n is a power of 3
    }
};
