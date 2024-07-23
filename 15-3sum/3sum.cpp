class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size()<2)return ans;
        sort(nums.begin(),nums.end());
        for(int i =0 ;i<nums.size()-2;i++)
        {
            int  a  = nums[i];
            if(a>0)break;
            if(i>0&&nums[i]==nums[i-1])
            continue;
            for(int left = i+1,right = nums.size()-1;left<right;)
            {
                int b = nums[left];
                int c = nums[right];
                int value = a+b+c;
                if(value == 0)
                {
                    ans.push_back(vector<int>{a,b,c});
                    while(b==nums[left]&&left<right)
                    {
                        left++;
                    }
                    while(c==nums[right]&&left<right)
                    {
                        right--;
                    }
                }
                else if(value>0)
                {
                    right--;
                }
                else{
                    left++;
                }

            }
         
        }
        return ans;
    }
};