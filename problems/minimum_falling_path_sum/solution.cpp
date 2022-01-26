// class Solution {
// public:
    
//     int solve(vector<vector<int>> & matrix, int row, int col,int n, vector<vector<int>> &dp){
        
//         if( row > n || col <0 || col > n || row <0) return 10000;
        
//         if( row == n-1 ) return matrix[row][col];
        
//         if(dp[row][col] != -1) return dp[row][col];
        
//         int d = matrix[row][col]+ solve ( matrix, row+1, col, n,dp);
        
//         int dL =matrix[row][col]+ solve( matrix, row+1, col-1,n,dp);
        
//         int dR =matrix[row][col]+solve( matrix, row+1, col+1, n,dp);
        
//         return dp[row][col] = min(d,min(dL,dR));
        
        
//     }
//     int minFallingPathSum(vector<vector<int>> matrix) {
          
//         int ans= 10000;
//         int n= matrix[0].size();
//         vector<vector<int>>dp(102,vector<int>(102,-1));
//         for( int i=0; i<n; i++){
            
//             ans = min(ans,solve(matrix,0,i,n,dp));
//         }
        
//         return ans;
        
//     }
// };

class Solution {
public:
    int path(int n, int curr_row,int curr_col,vector<vector<int>>& matrix,vector<vector<int>>&vec)
    {
        if(curr_row>=n || curr_col>=n || curr_col<0 || curr_row<0) return 10000;
        if(curr_row==n-1)  return matrix[curr_row][curr_col];
        if(vec[curr_row][curr_col] != -1)  return vec[curr_row][curr_col];
        int d = matrix[curr_row][curr_col]+path(n,curr_row+1,curr_col,matrix,vec);
        int dl = matrix[curr_row][curr_col]+path(n,curr_row+1,curr_col-1,matrix,vec);
        int dr = matrix[curr_row][curr_col]+path(n,curr_row+1,curr_col+1,matrix,vec);
        return vec[curr_row][curr_col] = min(d,min(dl,dr));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int ans = 10000;
        vector<vector<int>>vec(102,vector<int>(102,-1));
        for(int i=0;i<n;i++)
        {
            ans = min(ans,path(n,0,i,matrix,vec));
        }
        return ans;
    }
};