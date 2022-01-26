// class Solution {
// public:
    
//      int solve( vector<vector<int>> &grid , int row , int col ,int m, int n,  vector<vector<int>> &dp){
        
//         if( col >= n || row >= m ) return 10000;
//         if( row == m-1 && col == n-1) return grid[row][col];
        
//         if(dp[row][col] != -1 ) return dp[row][col];
         
//         int down = grid[row][col] + solve(grid, m, n,row,col+1,dp);
//         int right = grid[row][col] + solve(grid, m , n , row +1, col,dp);     
//         return dp[row][col]=min(down,right);    
        
//     }
    
//     int minPathSum(vector<vector<int>>& grid) {
        
//         int m = grid.size();
//         int n = grid[0].size(); 
//         vector<vector<int>> dp(m, vector<int>(n,-1));
        
//         return solve(grid,0,0,m,n,dp);
        
//     }
// };

class Solution {
public:
    int minsum(vector<vector<int>>& grid,int m,int n , int curr_row,int curr_col,vector<vector<int>>&t)
    {
        if(m-1==curr_row && n-1 ==curr_col) return grid[curr_row][curr_col];
        if(curr_row >= m || curr_col>= n) return 1000;
        if(t[curr_row][curr_col]!=-1) return t[curr_row][curr_col];
        int down = grid[curr_row][curr_col]+minsum(grid,m,n,curr_row,curr_col+1,t);
        int right = grid[curr_row][curr_col]+minsum(grid,m,n,curr_row+1,curr_col,t);
        return t[curr_row][curr_col]=min(down,right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>t(m, vector<int>(n, -1));
        return minsum(grid, m, n, 0, 0, t);
    }
};