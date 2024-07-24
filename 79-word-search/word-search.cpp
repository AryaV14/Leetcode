class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
    int m=board.size();
    int n=board[0].size();
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(dfs(board,i,j,word,0))
                return true;
        }
    }
    return false;
    }

private:
    bool dfs(vector<vector<char>>& board,int row, int col, const string& word,int index)
    {
        if(index==word.size())
            return true;
        
        if(row<0 || col<0 || row>=board.size() || col>=board[0].size() || board[row][col]!=word[index])
            return false;
        
        int temp= board[row][col];
        board[row][col]='*';

        vector<pair<int,int>> offsets {{0,1},{1,0},{-1,0},{0,-1}};
        for(auto offset:offsets)
        {
            int newrow= row+offset.first;
            int newcol= col+offset.second;
            if(dfs(board,newrow,newcol,word,index+1))
                return true;
        }
        board[row][col]=temp;
        return false;
    }


};