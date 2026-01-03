class Solution {
    public int[] getConcatenation(int[] nums) {
        int i,j=0,n= 2*nums.length;
        int[] ans= new int[n];
        for(i=0;i<nums.length;i++)
            ans[j++]=nums[i];
        for(i=0;i<nums.length;i++)
            ans[j++]=nums[i];
        return ans;
    }
}