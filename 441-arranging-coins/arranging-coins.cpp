class Solution {
public:
    int arrangeCoins(int n) {
        int start = 0, end = n, ans;
        long rows, totalSum;

        while(start <= end){
            rows = start+(end-start)/2;
            totalSum = (rows*(rows+1))/2;

            if(totalSum <= n){
                start = rows+1;
                ans = rows;
            }
            else{
                end = rows-1;
            }
        }
    return ans;
    }
};