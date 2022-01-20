class Solution {
public:
    
    int bestTime ( vector<int> & prices, int currDay, bool canBuy, vector<vector<int>> &dp){
        
        if (currDay >= prices.size() ) return 0; 
        // if ( trans <=0 ) return 0;
        
        if(dp[currDay][canBuy]!= -1) return dp[currDay][canBuy];
        
        if(canBuy) {
              int  idle = bestTime(prices,currDay+1,canBuy,dp);
              int  buy = -prices[currDay] + bestTime(prices, currDay+1,false,dp);
              return dp[currDay][canBuy] = max(idle,buy);          
        }
        else{
             int idle = bestTime(prices,currDay+1,canBuy,dp);
             int sell = prices[currDay] + bestTime( prices,currDay+2,true,dp);
             return dp[currDay][canBuy] = max(idle,sell);
        }    
    }
    
    int maxProfit(vector<int>& prices) {
        
        vector<vector<int>> dp(prices.size()+1,vector<int>(2,-1));
        return bestTime( prices,0,true,dp);
        
    }
};