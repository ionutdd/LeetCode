//https://leetcode.com/problems/excel-sheet-column-title/
//10 minutes; beats 100% in terms of time 

class Solution {
public:
    string convertToTitle(int columnNumber) {
        int change;
        string reverse;
        string answer;
        while (columnNumber != 0)
        {
            change = columnNumber % 26;
            if (change == 0)
                reverse.push_back('Z');
            else
                reverse.push_back(char(64 + change));
            if (columnNumber % 26 == 0)
                columnNumber -= 1;
            columnNumber = columnNumber / 26;
        }
        for (int i = reverse.size() - 1; i >= 0; i--)
            answer.push_back(reverse[i]);
        return answer;
    }
};
