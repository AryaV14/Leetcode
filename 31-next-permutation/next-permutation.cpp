class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int b=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                b=i;
                break;
            }
        }
        if(b==-1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i = n-1; i>b; i--){
            if(nums[i]>nums[b]){
                swap(nums[i], nums[b]);
                break;
            }
        }
        reverse(nums.begin()+b+1,nums.end());

        
    }
};