//https://leetcode.com/problems/string-to-integer-atoi/
//Dumbest problem ever, although good to train nerves and frustration
//45 minutes

class Solution {
public:
    int myAtoi(string s) {
        int ans = 0;
        bool isNeg = false;
        bool foundDigit = false;
        bool incorrect = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (foundDigit == true && (s[i] == '-' || s[i] == '+') && incorrect == true)
                break;
            if (foundDigit == true && (s[i] == '-' || s[i] == '+') && incorrect == false)
                {
                    isNeg = false;
                    break;
                }
            if (incorrect == true && s[i] == ' ' && foundDigit == false)
                return 0;
            if ((s[i] == '+' || s[i] == '-') && incorrect == true)
                return 0;
            if (s[i] == '-')
                {
                    isNeg = true;
                    incorrect = true;
                }
            if (s[i] == '+')
                incorrect = true;
            
            if (foundDigit == false && (s[i] < '0' || s[i] > '9') && s[i] != ' ' && s[i] != '-' && s[i] != '+')
                return 0;
            if (s[i] >= '0' && s[i] <= '9')
                {
                    foundDigit = true;
                    if (ans == INT_MAX / 10 && isNeg == true && ((s[i] - '0') == 8 || (s[i] - '0') == 9))
                        return -2147483648;
                    if (ans == INT_MAX / 10 && isNeg == false && (s[i] - '0') > 7)
                        return 2147483647;
                    if (ans > INT_MAX / 10)
                        if (isNeg == true)
                            {
                                ans = (-1) * pow(2,31);
                                return ans;
                            }
                        else
                            {
                                ans = pow(2,31) - 1;
                                return ans;
                            }
                    else
                        ans = ans * 10 + (s[i] - '0');
                }
            if (foundDigit == true && (s[i] < '0' || s[i] > '9'))
                break;
            
        }
        if (isNeg == false)
            return ans;
        else
            return ans * (-1);
    }
};
