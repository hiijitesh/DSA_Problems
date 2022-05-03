class Solution {
public:
    int sumOFDigits(int n)
    {
        int sum = 0;
        while( n > 0)
        {
            int x = n%10;
            sum+=(x*x);
            n= n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(n == 1) return true;

        int slow = n;
        int fast = n;
        
        do
        {
            slow = sumOFDigits(slow);
            fast = sumOFDigits(sumOFDigits(fast));
            
            if( fast ==1 ) return true;
        }
        while(slow != fast);
        
        return false;
        
    }
};