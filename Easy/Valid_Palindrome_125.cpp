//https://leetcode.com/problems/valid-palindrome/
//10 minutes

class Solution {
public:
    bool isPalindrome(string s) {
        string word;
        for (int i = 0; i < s.size(); i++)
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                    word.push_back(s[i]);
                if (s[i] >= 'A' && s[i] <= 'Z')
                    word.push_back(tolower(s[i]));
                if (s[i] >= '0' && s[i] <= '9')
                    word.push_back(s[i]);
            }
        int i = 0;
        if (word.size() == 0 || word.size() == 1)
            return true;
        while (i <= word.size() / 2)
        {
            if (word[i] != word[word.size() - i - 1])
                return false;
            i++;
        }
        return true;
    }
};
