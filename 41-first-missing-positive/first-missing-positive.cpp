class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size(),small=INT_MAX;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=i;
            if(nums[i]>0)
                small= min(small,nums[i]);
        } 
        if(small!=1)
            return 1;
        for(int i=0;i<n;i++)
        {
            if(mp.find(small+1)!=mp.end())
                small = small+1;
            else 
                break;
        }
        return small+1;
    }
};