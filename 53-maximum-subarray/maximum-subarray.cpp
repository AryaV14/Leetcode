class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n, maxSum, pre,suf,curMax,large;
        n=nums.size();
        pre=maxSum=0;
        large=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(pre<0)
                pre=0;
            pre+=nums[i];
            if(pre>maxSum)
            {
                maxSum=pre;
            }
            if(nums[i]>large)
                large=nums[i];
        }
        if(maxSum==0)
           maxSum =large;
        return maxSum;      
    }
};