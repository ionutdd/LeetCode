//https://leetcode.com/problems/find-the-difference/
//5 minutes

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> hash;
        for (int i = 0; i < s.size(); i++)
            hash[s[i]]++;
        for (int i = 0; i < t.size(); i++)
            {
                hash[t[i]]--;
                if(hash[t[i]] == -1)
                    return t[i];
            }
        return t[0];
    }
};
