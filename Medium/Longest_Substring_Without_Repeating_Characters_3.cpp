//https://leetcode.com/problems/longest-substring-without-repeating-characters/
//1hr

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 1 || s.size() == 0)
            return s.size();
        int left = 0;
        int right = 0;
        int ans = 1;
        unordered_map<char, int> hash;
        hash[s[0]] = 0;
        while (right < s.size())
        {
            right++;
            if (hash.find(s[right]) != hash.end() && hash[s[right]] >= left)
                {
                    if (right - left > ans)
                        ans = right - left;
                    left = hash[s[right]] + 1;
                    hash[s[right]] = right;
                }
            else
                hash[s[right]] = right;
        }
        if (right - left > ans)
            return right - left;
        return ans;
    }
};
