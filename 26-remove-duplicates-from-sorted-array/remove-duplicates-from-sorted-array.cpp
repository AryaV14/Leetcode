class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j,len;
        i=0;j=1;
        while(j<nums.size())
        {
            if(nums[j]==nums[i])
                j++;
            else
            {
                i++;
                nums[i]=nums[j];
            }
            
        }
        len=i+1;
        return len;

    }
};