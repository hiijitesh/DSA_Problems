class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int l = 0, r = 1, n = prices.size()-1;
        int profit = 0;
        
        while( r <= n)
        {
            if(prices[l] < prices[r])
            {
                int currProfit = prices[r] - prices[l];
                profit = max(profit, currProfit);
            }
            
            else
                l = r;
            
            r++;
        }
        return profit;
    }
};