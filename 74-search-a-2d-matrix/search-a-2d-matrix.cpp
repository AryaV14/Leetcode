class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m=matrix.size(),n=matrix[0].size();
        int top =0,left=0,right=n-1,bottom=m-1,mid,row;
        while(top<=bottom)
        {
            mid=top+(bottom-top)/2;
            if(matrix[mid][0]==target)
                return true;
            if(target>=matrix[mid][0] && target<=matrix[mid][n-1])
            {
                row = mid;
                break;
            }

            else if(matrix[mid][0]>target)
            {
                bottom=mid-1;
            }
            else{
                top=mid+1;

            }
            
        }
        
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(matrix[row][mid]==target)
                return true;
            else if(matrix[row][mid]>target)
            {
                right=mid-1;
            }
            else{
                left=mid+1;
            }
            
        }

        return false;
    }
};