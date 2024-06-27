class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n, maxSum, pre,suf,curMax,large;
        n=nums.size();
        pre=0;
        maxSum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            pre=max(nums[i],nums[i]+pre);
            maxSum=max(pre,maxSum);
        }
        return maxSum;      
    }
};