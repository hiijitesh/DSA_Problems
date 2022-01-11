class Solution {
public:
    
    int minCost( vector<int> & cost, int CI, unordered_map<int, int> &mp){
        
        //Base Case
        
        if( CI == cost.size() ) return 0;
        
        if( CI > cost.size() ) return 10000;
        
        int key = CI;
        
        if( mp.find(CI) != mp.end() ) return mp[key];
        
        int oneStep = cost[CI] + minCost( cost, CI+1,mp);
        
        int twoStep = cost[CI] + minCost(cost, CI+2 ,mp );
        
        mp[key] = min(oneStep, twoStep);
        
        return mp[key];
    }
    
   
    int minCostClimbingStairs(vector<int>& cost) {
        
        unordered_map<int, int> mp;
        
        int a = minCost( cost, 0,mp);
        
        int b = minCost( cost, 1,mp);
        
        return min( a, b);
       
        
    }
};