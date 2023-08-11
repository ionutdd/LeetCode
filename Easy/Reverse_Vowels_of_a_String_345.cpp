//https://leetcode.com/problems/reverse-vowels-of-a-string/
//10 minutes

class Solution {
public:
    string reverseVowels(string s) {
        vector<int> index;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                index.push_back(i);
        
        if (index.size() == 0)
            return s;

        for (int i = 0; i <= index.size() / 2; i++)
            if (i < index.size() - 1 - i)
                swap(s[index[i]], s[index[index.size() - 1 - i]]);
        return s;
    }
};
