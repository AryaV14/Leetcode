class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        
        fast = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};

// Hashmap

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(mp.find(nums[i])!=mp.end())
//             {
//                 return nums[i];
//             }
//             mp[nums[i]]=i;
//         }
//         return 0;
//     }
// };