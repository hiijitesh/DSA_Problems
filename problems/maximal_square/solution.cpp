class Solution {
public:
    
    int solve ( vector<vector<char>> &matrix , int row, int col, int m, int n,vector<vector<int>> &dp){
        
        if (col < 0 || row >=m  || col >= n || matrix[row][col] == '0') return 0;
        
        if(dp[row][col] != -1) return dp[row][col];
        
        int right =1 + solve ( matrix, row,col+1, m,n,dp);
        int down = 1+ solve( matrix,row+1,col,m,n,dp);
        int dR= 1+ solve(matrix,row+1, col+1,m,n,dp);
        
        return dp[row][col] = min(right,min(down,dR));
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        
        vector<vector<int>> dp(301,vector<int>(301, -1));
        
        int m= matrix.size();
        
        int n= matrix[0].size();
        
        int ans=0;
        int side=0;
        
        for ( int i=0; i<m; i++){
            for( int j=0; j<n; j++){
                
                if( matrix[i][j]== '1')
                    
                    side = solve(matrix,i,j,m,n,dp);
                    ans= max(ans, side*side);            
            }
        }
        return ans;
    }
};