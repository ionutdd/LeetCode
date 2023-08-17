//https://leetcode.com/problems/divide-two-integers/
//30 minutes

//Unfortunately I couldn't do better than O(dividend / divisor). Apparently there is a better solution of O(log(dividend / divisor)).
class Solution {
public:
    int divide(int dividend, int divisor) {
        bool neg = false;
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
            neg = true;
        if (dividend == 0)
            return 0;
        if (dividend == -2147483648)
        {
            if (divisor == -1)
                return 2147483647;
            if (divisor == 1)
                return -2147483648;
            if (divisor == -2147483648)
                return 1;
            if (divisor > 0)
            {
                int aux = divisor;
                divisor = 0 - aux;
            } 
            int ans = 0;
            for (int i = divisor; i >= dividend; i += divisor)
                {
                    ans++;
                    if (INT_MIN - divisor > i)
                        break;
                }
            if (neg == true)
            {
                int aux = ans;
                ans = 0 - aux;
            }
            return ans;
        }
        if (divisor == 1)
            return dividend;
        if (divisor == -1)
        {
            int aux = dividend;
            dividend = 0 - aux;
            return dividend;
        }
        if (divisor == -2147483648)
            return 0;
        if (dividend < 0)
            dividend = abs(dividend);
        if (divisor < 0)
            divisor = abs(divisor);
        int ans = 0;
        for (int i = divisor; i <= dividend; i += divisor)
        {
            ans++;
            if (INT_MAX - divisor < i)
                break;
        }
        if (neg == true)
        {
            int aux = ans;
            ans = 0 - aux;
        }
        return ans;
    }
};
