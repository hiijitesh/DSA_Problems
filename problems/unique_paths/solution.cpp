class Solution {
public:
    
    int solve( int m , int n , int row , int col , unordered_map<string, int> &dp){
        
        if( col >= n || row >= m ) return 0;
        
        if( row == m-1 && col == n-1) return 1;
        
        string key= to_string(row) +"_"+ to_string(col);
        
        if(dp.find(key) != dp.end()) return dp[key];
        
        int right = solve( m , n , row , col+1,dp);
        
        int down = solve( m,n,row+1,col,dp);
        
        return dp[key]=right+down;
        
        
        
        
    }
    int uniquePaths(int m, int n) {
        
        unordered_map<string, int> dp;
        
        return solve( m, n,0,0,dp);
        
    }
};