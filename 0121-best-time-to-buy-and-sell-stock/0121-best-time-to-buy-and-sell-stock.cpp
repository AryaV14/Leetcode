class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,least=prices[0];
        for(int i=0;i<prices.size();i++)
        {   
            if(prices[i]<least)
                least = prices[i];
          
            if(profit<prices[i]-least)
                profit=prices[i]-least;
        }
        return profit;
    }
};