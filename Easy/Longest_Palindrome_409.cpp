//https://leetcode.com/problems/longest-palindrome/
//15 minutes

class Solution {
public:
    int longestPalindrome(string s) {
        if (s.size() == 1)
            return 1;
        unordered_map<char, int> hash;
        for (int i = 0; i < s.size(); i++)
            hash[s[i]]++;
        int ans = 0;
        int maxi = 0;
        bool ok = 0;
        for (int i = 0; i < 26; i++)
            {
                if(hash['a' + i] % 2 == 0)
                    ans += hash['a' + i];
                else
                    {
                        ans += hash['a' + i] - 1;
                        ok = 1;
                    }
                if(hash['A' + i] % 2 == 0)
                    ans += hash['A' + i];
                else
                    {
                        ans += hash['A' + i] - 1;
                        ok = 1;
                    }
            }
        if (ok == 1)
            return ans + 1; 
        return ans;
    }
};
