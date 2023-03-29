class Solution {
private:
    int bestDish(vector<int>& satisfaction, int currIdx, int time, vector<vector<int>>&dp)
    {

        if(currIdx >= satisfaction.size()) return 0;
        
        if(dp[currIdx][time] != -1) return dp[currIdx][time];
        
        return dp[currIdx][time] = max((satisfaction[currIdx]* time ) + bestDish(satisfaction, currIdx+1, time+1, dp),  bestDish(satisfaction, currIdx+1, time, dp));
    }
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int n = satisfaction.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        
        return bestDish(satisfaction, 0, 1, dp);
    }
};