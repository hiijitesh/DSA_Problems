// class Solution {
    
// private:
//     int totalCombination(int amount, vector<int> &coins, int currCoin, vector<vector<int>> &dp)
//     {
//         if(amount == 0) return 1;
//         if(currCoin >= coins.size()) return 0;
 
//         if(dp[currCoin][amount] != -1) return dp[currCoin][amount];
        
//         int consider = 0;
//         if( coins[currCoin] <= amount){
            
//             consider = totalCombination(amount-coins[currCoin], coins, currCoin, dp);    
//         }
//         int notConsider = totalCombination(amount, coins, currCoin+1, dp);
        
//         return dp[currCoin][amount] = consider + notConsider;

//     }
    
// public:
//     int change(int amount, vector<int>& coins) {
        
//         vector<vector<int>> dp(302, vector<int>(5002,-1));
//         return totalCombination(amount, coins, 0, dp);
        
//     }
// };

class Solution {
public:
    int totalWays(vector<int>& coins,int current,int amount, vector<vector<int>> &dp)
    {
        if(amount==0)
            return 1;
        if(current>=coins.size())
            return 0;
        
        if(dp[current][amount]!= -1)
          return dp[current][amount];
        
        int consider=0;
        if(coins[current]<=amount){
            consider=totalWays(coins,current,amount-coins[current],dp);
    } 
    int notConsider=totalWays(coins,current+1,amount,dp);
    dp[current][amount] = consider+notConsider;
    return consider+notConsider;
} 
    int change(int amount, vector<int>& coins) {
        // int dp[50002];
        // memset(dp,-1,sizeof(dp));2][50
        
        vector<vector<int>> dp(coins.size()+1, vector<int>(amount+1, -1));
        return totalWays(coins,0,amount,dp);
    }
};