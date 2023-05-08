class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int m = mat.size();

        for(int i = 0; i < m; i++)
        {                   
            sum += mat[i][i];
            sum += mat[i][m-1-i];
        }

        if(m % 2 == 1)
        {
            sum -= mat[m/2][m/2];
        }
        return sum;
    }
};