class Solution {
public:
    int path(int m, int n, int row , int col, vector<vector<int>> &dp){
        
        if ( row== m-1 && col == n-1) return 1;
        
        if ( row >= m || col >= n) return 0;
        
        if( dp[row][col] != -1 ) return dp[row][col];
        
        int down = path( m,n,row+1, col,dp);
        
        int right = path( m,n, row, col+1,dp);
        
        return dp[row][col] = down+right;
    }
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(101, vector<int> (101,-1));
        
        return path( m, n, 0, 0,dp);
        
    }
};