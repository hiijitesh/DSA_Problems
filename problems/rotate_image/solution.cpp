class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        
        int n = mat.size();
        
        for(int row = 0; row < n; row++){
            
            for(int col = 0; col < row; col++){
                
                swap(mat[row][col], mat[col][row]);
            }
        }
        
        
        //now reverse the matrix so that it can be rotated by 90 degree
        for(int i = 0; i < n ; i++){

            reverse(mat[i].begin(), mat[i].end());
        }
    }
};