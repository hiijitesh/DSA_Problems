class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        if(m == 0 || n == 0){
            return false;
        }
        int start = 0, end = m*n-1;

        while(start<=end){
            int mid = start + (end - start)/2;

            int row = mid / n;
            int col = mid % n;

            int curr = matrix[row][col];

            if(curr == target){
                return true;
            }

            if(curr > target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
       return false; 
    }
};