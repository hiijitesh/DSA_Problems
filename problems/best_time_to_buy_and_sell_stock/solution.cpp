class Solution {
public:
    
    int bestTime ( vector<int> & prices, int currDay, bool canBuy,int trans, vector<vector<vector<int>>> &dp){
        
        if (currDay >= prices.size() ) return 0; 
        if ( trans <=0 ) return 0;
        
        if(dp[currDay][canBuy][trans] != -1) return dp[currDay][canBuy][trans];
        
        if(canBuy) {
              int  idle = bestTime(prices,currDay+1,canBuy,trans,dp);
              int  buy = -prices[currDay] + bestTime(prices, currDay+1,false,trans,dp);
              return dp[currDay][canBuy][trans] = max(idle,buy);          
        }
        else{
             int idle = bestTime(prices,currDay+1,canBuy,trans,dp);
             int sell = prices[currDay] + bestTime( prices,currDay+1,true,trans-1,dp);
             return dp[currDay][canBuy][trans] = max(idle,sell);
        }    
    }
    
    int maxProfit(vector<int>& prices) {
        
        vector<vector<vector<int>>> dp(prices.size()+1,vector<vector<int>>(2,vector<int>(2,-1)));
        return bestTime( prices,0,true, 1,dp);
        
    }
};