//https://leetcode.com/problems/valid-anagram/
//5 minutes

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hash;
        int ok = 0;
        for (int i = 0; i < s.size(); i++)
        {
            hash[s[i]]++;
            if (hash[s[i]] == 1)
                ok++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            hash[t[i]]--;
            if(hash[t[i]] < 0)
                return false;
            if(hash[t[i]] == 0)
                ok--;
        }
        if(ok == 0)
            return true;
        else
            return false;

      
        //Follow up:
        //If the inputs contain Unicode characters, then we only need to change the aspect of the hash, and retransform the input strings
        //The first 4 lines of code would look like this instead, and replace all 's' with 'S' and all 't' with 'T'
        //unordered_map<char32_t, int> hash;
        //int ok = 0;
        
        // Convert the input strings to Unicode (char32_t)
        //u32string S(s.begin(), s.end());
        //u32string T(t.begin(), t.end());
    }
};
