class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        
        int m = mat.size(), n = mat[0].size();
         if(n == 0 || m == 0)
            return false;
        
        int start = 0, end = m*n -1;
        
        while(start <= end)
        {
            int mid = start + (end - start) /2;
            
            int row = mid /n;
            int col = mid % n;
            
            int currVal = mat[row][col];
            
            if(target == currVal)
                {return true;}
            
            else if(target > currVal)
               { start = mid + 1;}
            else
               { end = mid -1;}
        }
        
        return false;
    }
};