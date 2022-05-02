class Solution {
public:

    int arraySign(vector<int>& nums) {
        
        int product = 1, count_negative =0;
        
        for( auto x: nums){
            
            if( x < 0) count_negative++;
            
            if( x == 0) return 0;
        }
        
        if(count_negative %2 == 0) return 1;
        
        else return -1;
        
    }
};