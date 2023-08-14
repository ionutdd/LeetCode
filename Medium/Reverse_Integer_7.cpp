//https://leetcode.com/problems/reverse-integer/
//30 minutes

class Solution {
public:
    int reverse(int x) {
        bool neg = false;
        int ans = 0;
        if (x < 0)
            neg = true;
        if (x == 0)
            return 0;
        if (x == -2147483648)
            return 0;
        if (neg == true)
            x = x * (-1);

        bool ok = false;
        while (x % 10 == 0)
            {
               x /= 10; 
               ok = true;
            }
        if (ok == true)
            while (x != 0)
            {
                ans = ans * 10 + x % 10;
                x /= 10;
            }
        else
            while (x != 0)
            {
                if (ans > INT_MAX / 10)
                    return 0;
                ans = ans * 10 + x % 10;
                x /= 10;
            }
        if (neg == true)
            ans = ans * (-1);
        return ans;
    }
};
