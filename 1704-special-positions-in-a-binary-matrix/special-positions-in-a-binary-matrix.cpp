class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int count=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            { 
                if(mat[i][j]==1)
                {
                    int flag=0;
                    for(int x=0;x<m;x++)
                        if(mat[x][j]!=0&&x!=i)
                            flag=1;
                    for(int y=0;y<n;y++)
                        if(mat[i][y]!=0&&y!=j)
                            flag=1;

                    if(flag==0)
                        count++;          
                }
                

            }
        return count;
    }
};