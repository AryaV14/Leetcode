class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= size(nums);
        vector<int> suf(n,1);
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
    

        // vector<int> pre;
        // vector<int> suf;
        // vector<int> res;
        // int n=nums.size(),pdt1=1,pdt2=1;
        // for(int i=0;i<n;i++)
        // {
        //     pdt1*=nums[i];
        //     pdt2*=nums[n-i-1];
        //     pre.push_back(pdt1);
        //     suf.insert(suf.begin(),pdt2);
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(i==0)
        //         res.push_back(suf[i+1]);
        //     else if(i==n-1)
        //         res.push_back(pre[i-1]);
        //     else
        //    {    
        //         pdt1=pre[i-1]*suf[i+1];
        //         res.push_back(pdt1);
        //     }
            
        // }
        // return res;
    }
};