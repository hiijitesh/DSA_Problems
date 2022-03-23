class Solution {
private: 
    int totalProfit(vector<int> &prices, int currDay, bool canBuy, int TxnCount, vector<vector<vector<int>>> &dp){
        
        if(currDay >= prices.size()) return 0;
        if(TxnCount == 0) return 0;
        if(dp[currDay][canBuy][TxnCount] != -1) return dp[currDay][canBuy][TxnCount];
        
        int idle = totalProfit(prices, currDay+1, canBuy, TxnCount, dp);
        int buy = 0;
        if(canBuy){
             buy = -prices[currDay] + totalProfit(prices, currDay+1, false, TxnCount, dp);
             return dp[currDay][canBuy][TxnCount] = max( idle, buy);
        }
        
        else{
            int sell = prices[currDay] + totalProfit(prices, currDay+1, true, TxnCount-1, dp);
            return dp[currDay][canBuy][TxnCount] = max( idle, sell);
        }
            
    }
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size()+1,vector<vector<int>>(2,vector<int>(101,-1)));
        return totalProfit(prices, 0, true, k, dp);
        
    }
};