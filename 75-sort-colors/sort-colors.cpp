class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int track[] = {0,0,0};
        for (int num:nums)
        {
            track[num]++;
        }    
        int index = 0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<track[i];j++)
            {
                nums[index]=i;
                index++;
            }
        }
    }
};
