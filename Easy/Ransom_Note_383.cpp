//https://leetcode.com/problems/ransom-note/
//3 minutes

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hashMagazine;
        unordered_map<char, int> hashNote;
        for (int i = 0; i < magazine.size(); i++)
            hashMagazine[magazine[i]]++;
        for (int i = 0; i < ransomNote.size(); i++)
            {
                hashNote[ransomNote[i]]++;
                if (hashNote[ransomNote[i]] > hashMagazine[ransomNote[i]])
                    return false;
            }
        return true;
    }
};
