//https://leetcode.com/problems/is-subsequence/
//10 minutes

class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> letters;
        if (s.size() == 0)
            return true;
        if (t.size() == 0)
            return false;
        for (int i = s.size() - 1; i >= 0; i--)
            letters.push(s[i]);
        for (int i = 0; i < t.size(); i++)
        {
            if (letters.top() == t[i])
                letters.pop();
            if (letters.size() == 0)
                return true;
        }
        return false;
    }
};
