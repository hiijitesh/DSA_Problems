class Solution {
public:
    int mySqrt(int x) {
         int start=0;
        int end=x;
        
        int ans = -1;
        
        while( start <= end)
        {
           long long int mid = start + ( end - start )/2;
            
            if( x == mid*mid) {
                return mid;
            }
            
            else if ( x > mid*mid)
            {
                
                 ans= mid;
                 start =  mid +1;
                
            }
            else
            {
                             
                 end = mid - 1;

            }
               
        }
        
        if( ans == -1) {
            return 0;
        }
        
        
        return ans;
        
        
    }
};