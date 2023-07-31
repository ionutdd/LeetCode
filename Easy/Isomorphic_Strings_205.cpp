//https://leetcode.com/problems/isomorphic-strings/
//15 minutes

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        
        if (s.size() == 0)
            return true;

        unordered_map<char, char> S;
        unordered_map<char, char> T;

        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0)
            {
                S[s[i]] = t[i];
                T[t[i]] = s[i];
            }
            if (S[s[i]] == '\0')
                S[s[i]] = t[i];
            
            if (T[t[i]] == '\0')
                T[t[i]] = s[i];
            
            if(S[s[i]] != t[i])
                return false;

            if(T[t[i]] != s[i])
                return false;
        }
        return true;
    }
};
