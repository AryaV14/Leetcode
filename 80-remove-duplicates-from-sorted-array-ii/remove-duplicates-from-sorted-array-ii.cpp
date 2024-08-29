class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=1;
        for(int i=1;i<nums.size();i++)
        {
            if(index==1 || nums[i]!=nums[index-2])
            {    
                nums[index++]=nums[i];
            }
    
        }
        
        return index;
    }
};