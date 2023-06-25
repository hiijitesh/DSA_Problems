class Solution {
public:
    int bestTime(vector<int>& prices, int currDay, bool canBuy, int txn,vector<vector<vector<int>>>& dp)
    {
        //if curr day is out of index or total transaction is zero then return 0;

        if(currDay >= prices.size())
            return 0;

        if(txn <= 0)
            return 0;

        if(dp[currDay][canBuy][txn] != -1)
            return dp[currDay][canBuy][txn];

        //if canBy == true then make 2 call--> either do nothing or Buy
        if(canBuy)
        {
            int idle = bestTime(prices, currDay+1, canBuy, txn, dp);
            int buy = -prices[currDay] + bestTime(prices, currDay+1, false, txn, dp);
            return dp[currDay][canBuy][txn] = max(idle, buy);
        }
        else
        {
            //now we can sell or be idle , dont sell untill u got best day to sell for max profit
            int idle = bestTime(prices, currDay+1, canBuy,txn, dp);
            int sell = prices[currDay] + bestTime(prices, currDay+1, true, txn-1, dp);
            return dp[currDay][canBuy][txn] = max(idle, sell);
        }
    }
    int maxProfit(vector<int>& prices) {
        
        vector<vector<vector<int>>> dp(prices.size()+1, vector<vector<int>>(2, vector<int>(2, -1)));
        return bestTime(prices, 0, true, 1, dp);
    }
};