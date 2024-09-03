class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0,curr=0;
        if(nums.size()<=1)
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=max(nums[i-1],i+nums[i]);
        }
        while(curr<nums.size()-1)
        {
            jump++;
            curr=nums[curr];
        }

        return jump;
    }
};