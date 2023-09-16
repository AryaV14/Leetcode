class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=size(nums),i,j,flag=0;
        vector<int> arr;
        for(i=0;i<n;i++)
          for(j=0;j<n;j++)
            if((nums[i]+nums[j])==target && i!=j && flag==0) 
             {
                arr.push_back(i);
                arr.push_back(j);
                flag=1;
             } 
        
        return arr;
    }
};