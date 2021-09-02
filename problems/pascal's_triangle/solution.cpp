class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>r(numRows);
        
        for(int i=0; i<numRows;i++){
            //keeping number of rows equal to number of column
            r[i].resize(i+1);
            //intializing 1st and 2nd element of a row with one
            r[i][0]=r[i][i]=1;
        
            //travering the 1st colmn to 2nd last colmn
            for(int j=1;j<i;j++){
                r[i][j]=r[i-1][j-1]+r[i-1][j];
            }
           
        }
         //returning the row of pascal triangle
        return r;
        
    }
};