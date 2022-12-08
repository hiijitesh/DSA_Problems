class Solution {
public:
   bool isPrime(int n)
    {
        if (n == 0 || n == 1)
            return false;

        for(int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    bool isThree(int n) {
         if(ceil((double)sqrt(n)) == floor((double)sqrt(n)))
         {
             int sq = (int)sqrt(n);
             if(isPrime(sq)) return true;
             return false;
         }
        return false;
    }
};