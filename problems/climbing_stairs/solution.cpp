class Solution {
// private:
public: 
    
    int totalways( int currIndex, int target, unordered_map<int, int> &mp){
        
        
        if( currIndex==target) return 1;
        
        if(currIndex> target) return 0;
        
        int currKey= currIndex;
        
        if(mp.find(currKey) != mp.end()) return mp[currKey];
        
        int oneStep= totalways( currIndex+1, target,mp);
        
        int twoStep= totalways(currIndex+2, target,mp);
        
        mp[currKey]= oneStep+twoStep;
        
        return oneStep+twoStep;
    }
   
    int climbStairs(int n) {
        
        unordered_map<int,int> mp;
        
        return totalways( 0, n,mp);
        
       
        
    }
};