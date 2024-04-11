class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= size(nums);
        vector<int> pre(n,1);
        vector<int> suf(n,1);
        vector<int> res(n,1);
        
        int k=1;
        for(int i=n-2;i>=0;i--)
        {   
            suf[i]=suf[i+1]*nums[i+1];
        }
        for(int i=1;i<n;i++)
        {   
            k*=nums[i-1];
            suf[i]*=k;
        
        }
       
        return suf;
        
    }

};