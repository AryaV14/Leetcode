class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> box[9];
        
        for(int r=0;r<9;r++)
            for(int c=0;c<9;c++)
            {
                if(board[r][c]=='.')
                    continue;
                char value = board[r][c];
                int boxIndex = (r/3)*3 + c/3;
                if(row[r].count(value) || col[c].count(value) || box[boxIndex].count(value))
                    return false;
                row[r].insert(board[r][c]);
                col[c].insert(board[r][c]);
                box[boxIndex].insert(board[r][c]);
            }
        return true;
    }
};