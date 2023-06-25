class Solution {
public:
    
    int bestTime ( vector<int> & prices, int currDay, bool canBuy,int txns, vector<vector<vector<int>>> &dp){
        
        if (currDay >= prices.size() ) return 0; 
        if ( txns <=0 ) return 0;
        
        if(dp[currDay][canBuy][txns] != -1) return dp[currDay][canBuy][txns];
        
        if(canBuy) {
              int  idle = bestTime(prices,currDay+1,canBuy,txns,dp);
              int  buy = -prices[currDay] + bestTime(prices, currDay+1,false,txns,dp);
              return dp[currDay][canBuy][txns] = max(idle,buy);          
        }
        else{
             int idle = bestTime(prices,currDay+1,canBuy,txns,dp);
             int sell = prices[currDay] + bestTime( prices,currDay+1,true,txns-1,dp);
             return dp[currDay][canBuy][txns] = max(idle,sell);
        }    
    }
    
    int maxProfit(vector<int>& prices) {
        
        vector<vector<vector<int>>> dp(prices.size()+1,vector<vector<int>>(2,vector<int>(3,-1)));
        return bestTime( prices,0,true, 2,dp);
        
    }
};