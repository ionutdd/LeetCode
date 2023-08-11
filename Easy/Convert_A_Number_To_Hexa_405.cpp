//https://leetcode.com/problems/convert-a-number-to-hexadecimal/
//25 minutes

class Solution {
public:
    string toHex(int num) {
        string ans;
        bool neg = false;
        if (num == (pow(2, 31) * (-1))) //what a weird exception, abs(-2^31) = -2^31 which means that I have to treat this case separately 
            return "80000000";
        if (num < 0)
        {
            num = pow(2, 31) - abs(num);
            neg = true;
        }
        if (num == 0)
            return "0";    
        while (num != 0)
        {
            if (num % 16 >= 10)
                ans.push_back('a' + num % 16 - 10);
            else 
                ans.push_back('0' + num % 16);
            num /= 16;
        }
        for (int i = 0; i < ans.size() / 2; i++)
            swap(ans[i], ans[ans.size() - i - 1]);
        if (neg == true)
            if (ans[0] - '0' < 2)
                ans[0] = ans[0] + 8;
            else
                ans[0] = 'a' + 8 - (10 - (ans[0] - '0'));
        return ans;
    }
};
