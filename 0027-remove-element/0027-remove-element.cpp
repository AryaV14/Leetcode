class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,j=0, len=nums.size();
        for(i=0;i<len;i++)
        {
            if(nums[i]!=val)
            {
                nums[j++]=nums[i];
            }
        }
           
   return j;

}

};