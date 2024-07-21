class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int j;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            j=abs(nums[i]);
            if(nums[j-1]<0)
            {
                ans.push_back(j);
            }
            nums[j-1]*=-1;

        }
        return ans;
    }
};

// hashmap

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         unordered_map<int,int> map;
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(map.find(nums[i])!=map.end())
//             {
//                 ans.push_back(nums[i]);
//             }
//             map[nums[i]]=i;
//         }
//         return ans;
//     }
// };