class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        nums.push_back(0);

        for (int i = 0 ; i < n; ++i)
        {
            while(nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i]]){
                swap(nums[i], nums[nums[i]]);
            }
        }

        for (int i = 1; i <= n; ++i)
            if (nums[i] != i){
                return i;
            }
            
        return n + 1;
    }
};




// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int small,large;
//         small=INT_MAX;
//         large=nums[0];
//         unordered_map<int,int> m;
//         for(int i=0;i<nums.size();i++)
//         {
//             m[nums[i]]=i;
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]<small && nums[i]>0)
//                 small=nums[i];
//             if(nums[i]>large && nums[i]>0)
//                 large=nums[i];

//         }
//         if(small>1)
//             return 1;
//         for(int i=small;i<=large;i++)
//         {
//             if(m.find(i)!=m.end())
//                 continue;
//             else
//                 return i;

//         }
//         return large+1;
//     }
// };