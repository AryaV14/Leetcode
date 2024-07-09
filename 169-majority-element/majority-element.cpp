class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),count=0;
        int maj=-1, votes=0;
        for(int i=0;i<n;i++)
        {   
            if(votes==0)
             {
                maj=nums[i];
                votes++;
             }
            else if(maj==nums[i])
            {
                votes++;
            }
            else
            {
                votes--;
            }

        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==maj)
                count++;
        }
        if(count>n/2)
        {
            return maj;
        }
        return -1;
        
    }
};