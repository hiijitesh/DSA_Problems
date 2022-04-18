class Solution {
public:
    int subtractProductAndSum(int n) {
        
        long long sum=0, prod=1;
        int diff;
        
        while(n>0){
            
            int x= n%10;
            sum+=x;
            prod*=x;
            n/=10;
            diff= prod-sum;
        }
        return diff;
        
    }
};