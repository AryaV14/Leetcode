class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int max = *max_element(candies.begin(), candies.end());
       vector<bool> result;
       for(int i=0;i < candies.size();i++)
       {
            candies[i] += extraCandies;
            candies[i] >= max ? result.push_back(true):result.push_back(false);
       }
       return result;
    }
};