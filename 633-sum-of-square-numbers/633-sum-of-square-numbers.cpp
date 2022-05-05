class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long long int left = 0, right = sqrt(c);
        
        while(left <= right)
        {
            long long int sum = left*left + right*right;
            
            if(sum > c) right--;
            
            else if(sum < c) left++;
        
            
            else
                return true;
        }
        
        return false;
    }
};