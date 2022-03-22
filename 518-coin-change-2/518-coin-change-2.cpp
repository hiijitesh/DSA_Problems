class Solution {
    
private:
    int totalCombination(int amount, vector<int> &coins, int currCoin, vector<vector<int>> &dp)
    {
        if(amount == 0) return 1;
        if(currCoin >= coins.size()) return 0;
        
        // string key = to_string(amount) + "_" + to_string(currCoin);
        
        // if(dp.find(key) != dp.end()) return dp[key];
        
        if(dp[currCoin][amount] != -1) return dp[currCoin][amount];
        
        int consider = 0;
        if( coins[currCoin] <= amount){
            
            consider = totalCombination(amount-coins[currCoin], coins, currCoin, dp);
            
        }
        int notConsider = totalCombination(amount, coins, currCoin+1, dp);
        
        return dp[currCoin][amount] = consider + notConsider;

    }
public:
    int change(int amount, vector<int>& coins) {
        
        vector<vector<int>> dp(302, vector<int>(5002,-1));
        return totalCombination(amount, coins, 0, dp);
        
    }
};