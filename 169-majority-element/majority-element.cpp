class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
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
        if(votes<=0)
            maj=-1;
        return maj;
        
    }
};