class Solution {
public:
    
    int countPrimes(int n) {
        
        int cnt = 0;
        
        bool prime[n+1];
        
        memset(prime, true, sizeof(prime));
        
        for(int i = 2; i*i <= n; i++)
        {
            if(prime[i])
            {
                for(int j = i*i; j <=n; j+=i)
                {
                    prime[j] = false;
                }
            }
        }
 
        for(int i = 2; i < n; i++)
        {
            if(prime[i])
                cnt++;
        }
        
        return cnt;
    }
};