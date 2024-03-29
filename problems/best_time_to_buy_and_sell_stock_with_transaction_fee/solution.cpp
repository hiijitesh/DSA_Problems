class Solution {
public:
    
    int bestTime ( vector<int> & prices, int currDay, bool canBuy, int fee, vector<vector<int>> &dp){
        
        if (currDay >= prices.size() ) return 0; 
        
        if(dp[currDay][canBuy]!= -1) return dp[currDay][canBuy];
        
        if(canBuy) {
              int  idle = bestTime(prices,currDay+1,canBuy,fee,dp);
              int  buy = -prices[currDay] + bestTime(prices, currDay+1,false,fee,dp);
              return dp[currDay][canBuy] = max(idle,buy);          
        }
        else{
             int idle = bestTime(prices,currDay+1,canBuy,fee,dp);
             int sell = -fee + prices[currDay] + bestTime( prices,currDay+1,true,fee,dp);
             return dp[currDay][canBuy] = max(idle,sell);
        }    
    }
    
    int maxProfit(vector<int>& prices,int fee) {
        
        vector<vector<int>> dp(prices.size()+1,vector<int>(2,-1));
        return bestTime( prices,0,true,fee,dp);
        
    }
};