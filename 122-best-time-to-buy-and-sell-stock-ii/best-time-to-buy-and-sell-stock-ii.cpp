class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0,min=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]>min)
                maxprofit+=(prices[i]-min);
            
            min=prices[i];


        }
        return maxprofit;
    }
};