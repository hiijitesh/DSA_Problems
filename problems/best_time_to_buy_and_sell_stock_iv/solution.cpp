class Solution {
private: 
    int totalProfit(vector<int> &prices, int currDay, bool canBuy, int txns, vector<vector<vector<int>>> &dp)
    {
        if(currDay >= prices.size()) 
            return 0;
        if(txns <= 0) 
            return 0;
        
        if(dp[currDay][canBuy][txns] != -1) return dp[currDay][canBuy][txns];
        
        // int idle = totalProfit(prices, currDay+1, canBuy, txns, dp);
        
        if(canBuy)
        {
            int idle = totalProfit(prices, currDay+1, canBuy, txns, dp);
            int buy = -prices[currDay] + totalProfit(prices, currDay+1, false, txns, dp);
            return dp[currDay][canBuy][txns] = max(idle, buy);
        }
        else
        {
            int idle = totalProfit(prices, currDay+1, canBuy, txns, dp);
            int sell = prices[currDay] + totalProfit(prices, currDay+1, true, txns-1, dp);
            return dp[currDay][canBuy][txns] = max(idle, sell);
        }
        
    }
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size()+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return totalProfit(prices, 0, true, k, dp);
        
    }
};