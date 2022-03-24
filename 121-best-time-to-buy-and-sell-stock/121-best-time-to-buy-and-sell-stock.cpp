class Solution { 
public: 
    int maxProfit(vector<int>& prices) { 
        
        // here I have created 3d vector in normal way 
        vector<vector<vector<int>>> dp(prices.size()+1, vector<vector<int>>(2,vector<int>(2,-1)));
        return maxProfitFromStocks(prices, 0, 1, 1, dp); 
    } 
     
private: 
    int maxProfitFromStocks(vector<int>& prices, int currentDay, int canBuy, int count,  vector<vector<vector<int>>> &dp){ 
        if(currentDay >= prices.size() || count == 0) 
            return 0; 
         
        int ans = 0; 
        if(dp[currentDay][canBuy][count] != -1) 
            return dp[currentDay][canBuy][count]; 
        if(canBuy == 1){ 
            int idle = maxProfitFromStocks(prices, currentDay + 1, canBuy, count, dp); 
            int buy = - prices[currentDay] + maxProfitFromStocks(prices, currentDay+1, 0, count, dp); 
            ans = max(idle, buy); 
        } 
        else{ 
             int idle = maxProfitFromStocks(prices, currentDay + 1, canBuy, count, dp); 
             int sell = prices[currentDay] + maxProfitFromStocks(prices, currentDay + 1, 1, count-1, dp); 
             ans =  max(idle, sell); 
        } 
        dp[currentDay][canBuy][count] = ans; 
        return dp[currentDay][canBuy][count]; 
        } 
};