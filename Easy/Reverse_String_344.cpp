//https://leetcode.com/problems/reverse-string/
//5 minutes

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0; i <= s.size() / 2; i++)
            if (i < (s.size() - 1 - i))
                swap(s[i], s[s.size() - 1 - i]);
    }
};
