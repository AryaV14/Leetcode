class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i : nums)
        {
            mp[i]++;
        }
        vector<vector<int>> freq(nums.size()+1);
        vector<int> res;
        for( auto p :  mp)
        {
            freq[p.second].push_back(p.first);
        }
        for(int i=freq.size()-1;i>=0;i--)
        {
            for (int num : freq[i]) {
                res.push_back(num);
                if (res.size() == k) {
                    return res;
                }
            }
        }
    return {};
    }
};