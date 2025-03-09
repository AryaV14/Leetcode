class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre=1;
        int n=nums.size();
        vector<int> suf(n,1);
        vector<int> res(n,1);
        suf[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suf[i]=nums[i]*suf[i+1];
        }
        for(int i=0;i<n-1;i++)
        {
            res[i]=pre*suf[i+1];
            pre*=nums[i];
        }
        res[n-1]=pre;

        return res;
    }
};