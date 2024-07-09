class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n,j,i;
        n=nums.size();
        j=0,i=0;
        while(j<n)
        {
            if(nums[j]!=0){
                nums[i++]=nums[j++];
                
            }
            else
                j++;

        }
        while(i<n)
        {
            nums[i++]=0;
        }

    }
};