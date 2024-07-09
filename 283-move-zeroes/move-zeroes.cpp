class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n,j,i;
        n=nums.size();
        i=0;
        for(j=0;j<n;j++)
        {
            if(nums[j]!=0)
                nums[i++]=nums[j];  
        }
        while(i<n)
        {
            nums[i++]=0;
        }

    }
};