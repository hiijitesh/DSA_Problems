class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0) return {};
        if(numRows == 1) return {{1}};
        vector<vector<int>> prevRow = generate(numRows-1);
        vector<int> newRow(numRows,1);

        for(int j = 1; j < numRows-1; j++){
            newRow[j] = prevRow.back()[j-1] + prevRow.back()[j];
        }
        prevRow.push_back(newRow);
        return prevRow;
        
    }
};