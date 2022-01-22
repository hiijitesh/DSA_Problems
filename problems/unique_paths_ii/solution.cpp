class Solution {
public:
    
    int solve( vector<vector<int>>& obstacleGrid, int row, int col,int m , int n, unordered_map<string,int>&dp){
        
        if( col >= n || row >= m || obstacleGrid[row][col] ) return 0;
        
        if( row == m-1 && col == n-1) return 1;
                
        string key= to_string(row) +"_"+ to_string(col);
        
        if(dp.find(key) != dp.end()) return dp[key];
        
        int right = solve(obstacleGrid,row,col+1,m,n,dp);
        int down =  solve(obstacleGrid,row+1,col,m,n,dp);
        
        return dp[key] = right+ down;

        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        unordered_map<string,int> dp;
        
        return solve(obstacleGrid,0,0,m,n,dp);
        
    }
};