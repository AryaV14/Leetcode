class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(map.find(nums[i])!=map.end())
            {
                ans.push_back(nums[i]);
            }
            map[nums[i]]=i;
        }
        return ans;
    }
};