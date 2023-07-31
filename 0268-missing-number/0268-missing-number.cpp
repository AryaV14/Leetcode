class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int arrsum=0, sum,i;
        int n =nums.size();
        sum = (n*(n+1))/2;
        for(i=0;i<n;i++)
        {
            arrsum= arrsum + nums[i];
        }

        return sum - arrsum;
    }
};