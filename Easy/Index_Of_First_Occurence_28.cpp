//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
//15 minutes

class Solution {
public:
    int strStr(string haystack, string needle) {
        unordered_map < int , string> hash;
        hash[1] = needle;
        if (size(needle) > size(haystack))
            return -1;
        for (int i = 0; i < size(haystack) - size(needle) + 1; i++)
            if (haystack.substr(i, size(needle)) == hash[1])
                return i;
        return -1;
    }
};
