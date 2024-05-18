class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i=0,s=-100,len = nums.size(),flag=0;
        int t=nums[len-1];
        for(i=len-2;i>=0;i--)
        {
            if(nums[i]>t)
                t=nums[i];
            else if(nums[i]<t && nums[i]>s)
                s=nums[i];
            else if(nums[i]<t && nums[i]<s)
               return true;
        }
       
            return false;
    }
};