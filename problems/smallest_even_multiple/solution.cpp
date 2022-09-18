class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        
        if( n%2 == 0) return n;
        
        if(n ==1) return 2;
        
        for(int i = 2; i <=n; i++)
        {
            int x = n*i;
            if(x % n == 0 and x%2==0)
                return x;   
        }
        return -1;
        
    }
};