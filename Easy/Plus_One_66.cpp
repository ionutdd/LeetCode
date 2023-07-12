//https://leetcode.com/problems/plus-one/
//10 minutes

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while (digits[i] == 9)
        {
            digits[i] = 0;
            i--;
            if (i == -1)
                break;
        }
        if (i == -1)
        {
            digits[0] = 1;
            digits.push_back(0);
        }
        else
            digits[i] += 1;
        return digits;
    }
};
