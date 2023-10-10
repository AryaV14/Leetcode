class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,today=0,least=prices[0];
        for(int i=0;i<prices.size();i++)
        {   
            if(prices[i]<least)
                least = prices[i];
            today=prices[i]-least;
            if(profit<today)
                profit=today;
        }
        return profit;
    }
};