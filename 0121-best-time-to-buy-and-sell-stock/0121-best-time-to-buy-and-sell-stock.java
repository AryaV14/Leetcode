class Solution {
    public int maxProfit(int[] prices) {
        int min=prices[0], profit=0,max_profit=0;
        for(int i=0;i<prices.length;i++){
            if(prices[i]<min)
                min= prices[i];
            profit = prices[i]-min;
            if(profit>max_profit){
                max_profit= profit;
            }
        }
        return max_profit;
    }
}