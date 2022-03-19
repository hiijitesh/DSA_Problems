class Solution {
    
private:
    
    int minCost( vector<int> &cost, int currStep, vector<int> &dp){
        
        if( currStep == cost.size()) return 0;
        if( currStep > cost.size()) return 1002;
        
        if( dp[currStep] != -1) return dp[currStep];
        
        int oneStepClimb = cost[currStep] + minCost( cost, currStep+1, dp);
        int twoStepClimb = cost[currStep] + minCost( cost, currStep+2, dp);
        
        return dp[currStep] = min( oneStepClimb, twoStepClimb);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        vector<int> dp(cost.size()+1, -1);
        return min(minCost( cost, 0, dp), minCost(cost, 1, dp));
    }
};