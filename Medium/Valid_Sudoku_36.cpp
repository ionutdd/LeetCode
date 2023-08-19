//https://leetcode.com/problems/valid-sudoku/
//15 minutes

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i += 3)
            for (int j = 0; j < 9; j += 3)
            {
                unordered_map<char, int> hash;
                for (int k = i; k < i + 3; k++)
                    for (int l = j; l < j + 3; l++)
                        if (board[k][l] != '.')
                            if (hash[board[k][l]] == 1)
                                return false;
                            else
                                hash[board[k][l]] = 1;
                hash.clear();
            }
        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, int> hashLine;
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                    if (hashLine[board[i][j]] == 1)
                        return false;
                    else
                        hashLine[board[i][j]] = 1;
            }
            hashLine.clear();
        }
        for (int j = 0; j < 9; j++)
        {
            unordered_map<char, int> hashCol;
            for (int i = 0; i < 9; i++)
            {
                if (board[i][j] != '.')
                    if (hashCol[board[i][j]] == 1)
                        return false;
                    else
                        hashCol[board[i][j]] = 1;
            }
            hashCol.clear();
        }
        return true;
    }
};
