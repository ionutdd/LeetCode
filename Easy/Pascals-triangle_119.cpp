//https://leetcode.com/problems/pascals-triangle/
//15 minutes, perfect solution

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> k(numRows);
        if (numRows >= 1)
            k[0] = {1};
        if (numRows >= 2)
            k[1] = {1, 1};
        for (int i = 2; i < numRows; i++) {
            k[i].resize(i + 1);
            k[i][0] = 1;
            k[i][i] = 1;
            for (int j = 1; j < i; j++) 
            {
                k[i][j] = k[i-1][j-1] + k[i-1][j];
            }
        }
        return k;
    }
};
