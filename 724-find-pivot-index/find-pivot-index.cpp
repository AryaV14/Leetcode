class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int* left, *right;
        left = (int *)malloc(n*sizeof(int));
        right = (int *)malloc(n*sizeof(int));
        left[0]=0;
        right[n-1]=0;
        for(int i=1;i<n;i++)
            left[i]=left[i-1]+nums[i-1];
        for(int j=n-2;j>=0;j--)
            right[j]=right[j+1]+nums[j+1];
        for(int i=0;i<n;i++)
        {
            if(left[i]==right[i])
                return i;
        }
        return -1;
    }
};




// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int j=nums.size()-1, left=right=i=0;
//         left=nums[i];
//         right=nums[j];
//         while(i!=j-1)
//         {
//             if(left<right)
//             {
//                 i++;
//                 left+=nums[i];
//             }else if(right<left)
//             {
//                 j--;
//                 right+=nums[j];
//             }
//         }
//         if(left==right)
//             return i;
//         else
//          return -1;

//     }
// };