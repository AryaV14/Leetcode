class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=2;
        if(nums.size()<=2)
        {
            return index=nums.size();
        }
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]!=nums[index-2])
            {    
                nums[index++]=nums[i];
            }
    
        }
        
        return index;
    }
};