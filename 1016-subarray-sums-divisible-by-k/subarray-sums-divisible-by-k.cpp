class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),sum=0,mod,count=0;
        unordered_map<int,int> map;
        map[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            mod=sum%k;
            if(mod<0)
                mod+=k;
            if(map.find(mod)!=map.end());
            {
                count+=map[mod];
            }
            map[mod]++;
        }
        return count;
        
    }
};