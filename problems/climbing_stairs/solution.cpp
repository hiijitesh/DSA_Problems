class Solution {
// private:
public: 
    
    int totalways( int currIndex, int target, vector<int> &dp){
        
        
        if( currIndex==target) return 1;        
        if(currIndex> target) return 0;
        
        if ( dp[currIndex] != -1 ) return dp[currIndex];
        
        // if(mp.find(currKey) != mp.end()) return mp[currKey];
        
        int oneStep= totalways( currIndex+1, target,dp);
        int twoStep= totalways(currIndex+2, target,dp);
        
        return dp[currIndex]= oneStep+twoStep;

    }
   
    int climbStairs(int n) {
        
        // unordered_map<int,int> mp;
        
        vector<int> dp( n+1, -1);
        
        return totalways( 0, n,dp);
        
       
        
    }
};