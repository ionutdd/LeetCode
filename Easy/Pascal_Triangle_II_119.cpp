//https://leetcode.com/problems/pascals-triangle-ii/
//10 minutes

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> Row(rowIndex + 1);
        Row[0] = {1};

        if (rowIndex == 0)
            return Row[0];

        for (int i = 1; i <= rowIndex; i++) 
            for (int j = 0; j <= i; j++) 
                if (j == 0 || j == i)
                    Row[i].push_back(1);
                else
                    Row[i].push_back(Row[i - 1][j - 1] + Row[i - 1][j]);
        
        return Row[rowIndex];
    }
};
