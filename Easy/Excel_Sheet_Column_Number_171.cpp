//https://leetcode.com/problems/excel-sheet-column-number/
//5 minutes; Beats 100% of solutions in regards to time complexity

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        int factor;
        for (int i = 0; i < columnTitle.size(); i++)
        {
            factor = pow(26, columnTitle.size() - i - 1);
            ans += factor * (int(columnTitle[i] - 'A') + 1);
        }
        return ans;
    }
};
