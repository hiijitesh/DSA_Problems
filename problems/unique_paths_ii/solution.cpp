class Solution {
public:
    int pathSum( int row, int col, int m, int n, vector<vector<int>>  &obstacleGrid, vector<vector<int>> &dp){
        
        if(obstacleGrid[0][0]== 1 || obstacleGrid[m-1][n-1] == 1 ) return 0;
        
        if( row == m-1 && col == n-1) return 1;
        
        if( row >=m || col >= n ||  obstacleGrid[row][col] == 1 ) return 0;
        
        if ( dp[row][col] != -1) return dp[row][col];
        
        int right = pathSum(row, col+1, m,n, obstacleGrid,dp);
        int down = pathSum( row+1, col, m,n, obstacleGrid,dp);
        
        return dp[row][col] = right+down;  
        
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        vector<vector<int>> dp( 101 , vector<int> (101,-1));
        
        int m=  obstacleGrid.size();
        
        int n= obstacleGrid[0].size();
        
        
        return pathSum( 0,0,m,n,obstacleGrid,dp);
    }
};