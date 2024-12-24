class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 0, end = num;

        while(start <= end){
            long mid = (start+end)>>1;

            long prod = mid*mid;

            if(prod == num){
                return true;
            }
            else if(prod > num){
                end = (int)mid -1;
            }else{
                start = (int)mid+1;
            }
        }
        return false;
    }
};