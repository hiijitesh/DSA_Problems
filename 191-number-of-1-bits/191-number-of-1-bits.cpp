class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int cnt = 0;
        while(n){
            if((n&1) > 0)// right shift each bit and count them
                cnt++;
            n = n>>1; // doing left shit to count binary 1
        }
        return cnt;
    }
};
