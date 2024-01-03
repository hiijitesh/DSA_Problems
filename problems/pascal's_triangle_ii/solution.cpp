class Solution {
public:
    vector<int> getRow(int n) {
        
        if(n == 0) return {1};
        
        if(n == 1) return {1,1};
        
        vector<int> prevRow = getRow(n-1);
        vector<int> currRow(n+1,1);
        
        for(int j = 1; j < n; j++){
            currRow[j] = prevRow[j-1]+prevRow[j];
        }
        
        return currRow;
    }
};