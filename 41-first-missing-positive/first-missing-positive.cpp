class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int small,large;
        small=INT_MAX;
        large=nums[0];
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<small && nums[i]>0)
                small=nums[i];
            if(nums[i]>large && nums[i]>0)
                large=nums[i];

        }
        if(small>1)
            return 1;
        for(int i=small;i<=large;i++)
        {
            if(m.find(i)!=m.end())
                continue;
            else
                return i;

        }
        return large+1;
    }
};