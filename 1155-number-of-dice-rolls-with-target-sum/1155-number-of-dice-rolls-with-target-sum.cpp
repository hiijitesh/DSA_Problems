class Solution {
public:
    #define MOD  1000000007
    
    int totalways( int dice, int f, int target, vector<vector<int>>&dp){
        
        if(dice == 0 && target !=0) return 0;
        if(dice==0 && target == 0 ) return 1;
        if( dice != 0 && target==0) return 0;
        
        if(dp[dice][target] != -1) return dp[dice][target];
        int ans=0;
        
        for(int i=1; i<=f; i++){
            
            // this might leads to edge case
            if( i<= target){
                int tempans = totalways(dice-1,f,target-i,dp);
                ans=(ans%MOD+ tempans%MOD)%MOD;    
            }          
        }       
        return  dp[dice][target]=ans%MOD;
    }
    
    int numRollsToTarget(int n, int k, int target) {
        
        vector<vector<int>>dp(32,vector<int>(1001,-1));
        return totalways ( n, k, target,dp)%MOD;  
    }
};