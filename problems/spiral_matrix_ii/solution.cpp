class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,right=n-1,bottom=n-1,top=0;
        int val=1;
        vector<vector<int>> matrix(n, vector<int> (n));
        while(left<=right && top<=bottom)
        {

                for(int i=left;i<=right;i++) matrix[top][i] = val++;
                    top++;

                for(int i=top;i<=bottom;i++) matrix[i][right] = val++;
                    right--;

                for(int i=right;i>=left;i--) matrix[bottom][i] = val++;
                    bottom--;

                for(int i=bottom;i>=top;i--) matrix[i][left] = val++;
                    left++;
    
        }
        return matrix;
        
    }
};