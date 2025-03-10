class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> set(nums.begin(),nums.end());
       int streak =0;
       for( int num : set){
        if(set.find(num-1)==set.end())
        {
            int currnum =num;
            int currstreak =0;
            while(set.find(currnum)!=set.end())
            {
                currnum++;
                currstreak++;
            }
            streak = max(currstreak,streak);
        }
        
            
       }
       return streak;
    }
};