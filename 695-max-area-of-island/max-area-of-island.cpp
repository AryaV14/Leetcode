class Solution {
private:
    int dfs(vector<vector<int>>& grid,int i,int j,int& t){
        int n=grid.size(),m=grid[0].size();
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j]==1){
            grid[i][j]=0;
            t++;
            dfs(grid,i+1,j,t);
            dfs(grid,i-1,j,t);
            dfs(grid,i,j+1,t);
            dfs(grid,i,j-1,t);
        }
        return t;
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int t=0;
                    ans=max(ans,dfs(grid,i,j,t));
                }
            }
        }
        return ans;
    }
};