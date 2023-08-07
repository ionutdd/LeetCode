//https://leetcode.com/problems/word-pattern/
//25 minutes

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> hash;
        unordered_map<char, string> hash2;
        string word;
        int j = 0;
        for (int i = 0; i < s.size() + 1; i++)
        {
            if (s[i] == ' ')
                {
                    if (hash.find(word) == hash.end())
                        hash[word] = pattern[j];
                    if (hash2.find(pattern[j]) == hash2.end())
                        hash2[pattern[j]] = word;
                    if (hash2[pattern[j]] != word)
                        return false;
                    if (hash[word] != pattern[j])
                        return false;
                    j++;
                    word = "";
                }
            else if (i == s.size())
                {
                    if (hash.find(word) == hash.end())
                        hash[word] = pattern[j];
                    if (hash2.find(pattern[j]) == hash2.end())
                        hash2[pattern[j]] = word;
                    if (hash2[pattern[j]] != word)
                        return false;
                    if (hash[word] != pattern[j])
                        return false;
                }
            else
                word.push_back(s[i]);
        }
        for (int j = 0; j < pattern.size(); j++)
            if(hash2.find(pattern[j]) == hash2.end())
                return false;
        return true;
    }
};
