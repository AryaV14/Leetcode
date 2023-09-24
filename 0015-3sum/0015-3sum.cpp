// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         unordered_map<int, int> map;
//         vector<vector<int>> vec;
//         int i,j, n=size(nums);

//         if(nums.size() < 3){                // Base Case 1
//             return {};
//         }

//         for(i=0;i<n;i++)
//             map[nums[i]]=i;
//         for(i=0;i<n;i++)
//         {   
//             int flag =0,present=0;
//             vector<int> v1;
//             int compliment = 0-nums[i];
//             for(j=0;j<n && i!=j;j++){
//                 int num3 = compliment- nums[j];
//                 if(map.count(num3) && flag==0 && map[num3]!=j){
//                     v1.push_back(num3);
//                     v1.push_back(nums[j]);
//                     v1.push_back(nums[i]);
//                     flag=1;
//                 }
            
//             }
//             int x=size(vec);
//             sort(v1.begin(), v1.end());
//             for(j=0;j<x;j++){
//                 if(vec[j]==v1)
//                     present=1;
//             }
            
//             if(!v1.empty() && present==0)
//              vec.push_back(v1); 
                 
//         }
//         return vec;
//     }
// };


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());     //Sorted Array
        if(nums.size() < 3){                // Base Case 1
            return {};
        }
        if(nums[0] > 0){                    // Base Case 2
            return {};
        }
        unordered_map<int , int> hashMap;
        for(int i = 0 ; i < nums.size() ; ++i){     //Hashing of Indices
            hashMap[nums[i]] = i;
        }
        vector<vector<int>> answer;
        for(int i = 0 ; i < nums.size() - 2 ; ++i){     //Traversing the array to fix the number.
            if(nums[i] > 0){     //If number fixed is +ve, stop there because we can't make it zero by searching after it.
                break;
            }
            for(int j = i + 1 ; j < nums.size() - 1 ; ++j){     //Fixing another number after first number
                int required = -1*(nums[i] + nums[j]);    //To make sum 0, we would require the -ve sum of both fixed numbers.
                if(hashMap.count(required) && hashMap.find(required)->second > j){ //If it exists in hashmap and its last occurrence index > 2nd fixed index, we found our triplet.
                    answer.push_back({nums[i] , nums[j] , required});
                }
                j = hashMap.find(nums[j])->second; //Update j to last occurence of 2nd fixed number to avoid duplicate triplets.
            }
            i = hashMap.find(nums[i])->second;     //Update i to last occurence of 1st fixed number to avoid duplicate triplets.
        }
        return answer;  //Return answer vector.
    }
};
