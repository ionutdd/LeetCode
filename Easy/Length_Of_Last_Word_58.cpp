//https://leetcode.com/problems/length-of-last-word/
//15 minutes

class Solution {
public:
    int lengthOfLastWord(string s) {
        int index_letter = 0;
        int index_space = -1;
        int index_space2 = -1;
        if (s.size() == 1)
            if (s[0] != ' ')
                return 1;
            else
                return 0;
        for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != ' ')
                    {
                        index_letter = i;
                        index_space = index_space2;
                    }
                if (s[i] == ' ')
                    index_space2 = i;
            }
        return index_letter - index_space;    
    }
};
