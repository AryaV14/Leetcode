class Solution {
public:
    int maxSubArray(vector<int>& nums) {

            int maxSum=INT_MIN, curSum = 0 ,n=nums.size();
            for(int i=0;i<n;i++)
            {
            
                curSum+=nums[i];
                if(curSum>maxSum)
                    maxSum=curSum;
                if(curSum<0)
                    curSum=0;
                
            }

            return maxSum;










        // int n, maxSum, pre,suf,curMax,large;
        // n=nums.size();
        // pre=0;
        // maxSum=INT_MIN;
        // for(int i=0;i<n;i++)
        // {
        //     pre=max(nums[i],nums[i]+pre);
        //     maxSum=max(pre,maxSum);
        // }
        // return maxSum;      
    }
};