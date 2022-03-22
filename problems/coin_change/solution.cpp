class Solution {
    
private:
    int minCoin(vector<int> &coins, int amount, int currCoin, vector<vector<int>> &dp)
    {
        if(currCoin >= coins.size()) return 100000;
        if(amount == 0) return 0;
        
        if(dp[currCoin][amount] != -1) return dp[currCoin][amount];
        
        int consider = 100000;
        if(coins[currCoin] <= amount){
            
            consider = 1 + minCoin(coins, amount-coins[currCoin],currCoin, dp);
        }
        
        int notConsider = minCoin(coins, amount, currCoin+1, dp);
        
        return dp[currCoin][amount] = min(consider, notConsider);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
     
        vector<vector<int>> dp(13, vector<int> (amount+1, -1));
        int ans =  minCoin(coins, amount, 0, dp);
        
        if( ans >= 100000) return -1; 
            
        else return ans;
        
    }
    
};