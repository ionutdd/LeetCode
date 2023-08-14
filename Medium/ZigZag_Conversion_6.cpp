//https://leetcode.com/problems/zigzag-conversion/
//45 minutes

//O(n) solution!
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() <= numRows)
            return s;
        string ans;
        vector<string> rowWord(numRows + 1);
        int k = 1;
        bool edge = false;
        for (int i = 0; i < s.size(); i++)
        {
            bool ok = false;
            if (edge == false)
                if (k == numRows)
                {
                    rowWord[k] += s[i];
                    k--;
                    ok = true;
                }
                else
                {
                    rowWord[k] += s[i];
                    k++;
                }
            else
            {
                if (k == 1)
                {
                    edge = false;
                    rowWord[k] += s[i];
                    k++;
                }
                else
                {
                    rowWord[k] += s[i];
                    k--;
                }
            } 
            if (ok == true)
                edge = true;
        }

        for (int i = 1; i <= numRows; i++)
            for (int j = 0; j < rowWord[i].size(); j++)
                ans.push_back(rowWord[i][j]);
        return ans;
    }
};
