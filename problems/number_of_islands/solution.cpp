class Solution {
public:
    void sinkIsland(vector<vector<char>>&grid, int row, int col, int m, int n){
        
        if(row < 0 || row >=m || col < 0 || col >= n || grid[row][col] == '0') return;
        
        grid[row][col] = '0';
        
        //up
        sinkIsland(grid, row-1, col, m, n);
        //left
         sinkIsland(grid, row, col-1, m, n);
        //down
         sinkIsland(grid, row+1, col, m, n);
        //right
         sinkIsland(grid, row, col+1, m, n);
        return;
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        int ans = 0;
        
        for(int row = 0; row < m; row++){
            for(int col = 0; col < n; col++){
                
                if(grid[row][col] == '1') {
                    ans+=1;
                    sinkIsland(grid, row, col, m , n);
                }
            }
        }
        return ans;
    }
};