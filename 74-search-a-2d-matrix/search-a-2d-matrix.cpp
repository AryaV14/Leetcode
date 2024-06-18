class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m,n,mid,low,high,row,x;
        x= target;
        m=matrix.size();
        n=matrix[0].size();
        low = 0;
        high = m-1;
        while (low <= high) 
        {
            int mid = low + (high - low) / 2;
            if(x>=matrix[mid][0] && x<=matrix[mid][n-1])
            {
                row = mid;
                break;
            }
            if (matrix[mid][0]< x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        low = 0;
        high = matrix[row].size()-1;
        while (low <= high) 
        {
            int mid = low + (high - low) / 2;
            if (matrix[row][mid] == x)
                return true;
            if (matrix[row][mid]< x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};