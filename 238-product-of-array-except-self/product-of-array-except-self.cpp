class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),pre=1;
        vector<int> suf(n,1);
        for(int i=n-2;i>=0;i--)
        {
            suf[i]=suf[i+1]*nums[i+1];
        }
        for(int i=1;i<n;i++)
        {
            pre*=nums[i-1];
            suf[i]*=pre;

        }
        return suf;

    }
};