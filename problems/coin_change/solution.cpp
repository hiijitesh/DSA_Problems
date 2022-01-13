class Solution {
public:    
   int mincoin( vector<int> & coins, int currIndex, int amount ,vector<vector<int>> &dp){
       
      // unordered_map<string, int> mp;
        
        if( amount == 0 ) return 0;
        
        if( currIndex >= coins.size()) return 100000;
              
       int includePos =100000;
       
      if( dp[currIndex][amount] != -1) return dp[currIndex][amount];
       
       // if(mp.find(currKey) != mp.end()) return mp[currKey];
       
        if (coins[currIndex] <= amount){
            
             includePos = 1 + mincoin( coins,currIndex,amount-coins[currIndex],dp);                  
        }
        
        int excludePos = mincoin( coins,currIndex+1,amount,dp);
        
      return dp[currIndex][amount]= min(includePos, excludePos);    
       
        
    }
                
    int coinChange(vector<int>& coins, int amount) {  
        
        vector<vector<int>> dp( coins.size()+1, vector<int> (amount+1,-1));
        
        int ans = mincoin(coins, 0,amount ,dp);
        
        if( ans >= 100000) {
            return -1;
        }
        else{
            return ans;
        } 
        
    }
};