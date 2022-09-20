class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int row = 0; row < m; row++)
        {
            for(int col = row+1; col < m; col++)
            {
                swap(matrix[row][col], matrix[col][row]);
            }
        }
        
        
        for(int row = 0; row < m; row++)
            reverse(matrix[row].begin(), matrix[row].end());
    }
};