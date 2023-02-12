class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        
        int row = 0, col = mat[0].size()-1;
        
        int m = mat.size(), n = mat[0].size();
        
        while( row < m && col >= 0 )
        {
            // long long currVal = mat[row][col];
            
            if(mat[row][col] == target)
                return true;
            
            else if( mat[row][col] < target)
                row++;
            else
                col --;
        }
        
        return false;
    }
};