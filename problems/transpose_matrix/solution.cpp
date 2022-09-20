class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int r = matrix.size();
        
        int c = matrix[0].size();
        
        vector<vector<int>> transpose(c, vector<int>(r));
        
        for(int col = 0; col < c; col++)
        {
            for(int row = 0; row < r; row++)
            {
                transpose[col][row] = matrix[row][col];
            }
        }
        
        return transpose;
    }
};