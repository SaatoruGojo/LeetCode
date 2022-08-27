class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
         int profit=0;
         int min1=prices[0];
         for(int i=1;i<prices.size();i++)
         {
            min1=min(prices[i],min1);
            profit=max(profit,(prices[i]-min1));
         }
        return profit;
        
    }
};