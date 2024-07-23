class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());     //Sorted Array
        if(nums.size() < 3){                // Base Case 1
            return {};
        }
        if(nums[0] > 0){                    // Base Case 2
            return {};
        }
         for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]=i;
        }
        for(int i=0;i<nums.size()-2;i++)
        {   
            if(nums[i] > 0){     
                break;
            }
            for(int j = i + 1 ; j < nums.size() - 1 ; ++j)
                
                {
                    int x=(nums[i]+nums[j])*-1;
                    if(map.count(x)&& map.find(x)->second>j)
                    {
                        vector<int> ret={nums[i],nums[j],x};
                        ans.push_back(ret);
                    }
                j = map.find(nums[j])->second; 
            }
            i = map.find(nums[i])->second; 
            
        }
        return ans;
        
    }
};