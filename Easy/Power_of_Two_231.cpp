//https://leetcode.com/problems/power-of-two/

//Bit operations --> 2 minutes
/*class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0)
            return false;
        while((n & 1) == 0)
        {
            n >>= 1;
        }
        if(n == 1)
            return true;
        return false;
    }
};
*/ 

//No loops or recursion  --> 20 minutes
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0)
            return false;

        if (n == 1)
            return true;

        if (n == -2147483648)  //with this particular n, it overflows when we try n - 1 so we need to check it beforehand
        {
            return false;
        }

        if ((n & (n-1)) == 0)
            return true;
        
        return false;
    }
};
