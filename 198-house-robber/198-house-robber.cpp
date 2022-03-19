class Solution {
public:
    
    int maximumMoney ( vector<int> &nums, int currIndex, vector<int> &dp){
        
        if( currIndex >= nums.size()) return 0;
        
        //we have two choice either we can rob that particular house or not
        // if we did robed it then we cant rob adjecent house
        //if we didnt robed it then we can adjacent house
        
        if(dp[currIndex] != -1) return dp[currIndex];
        
        int robbed = nums[currIndex] + maximumMoney(nums, currIndex+2, dp);
        
        int notRobbed = maximumMoney(nums, currIndex+1, dp);
        
        return dp[currIndex] = max ( robbed, notRobbed);
    }
    int rob(vector<int>& nums) {
        
        vector<int> dp ( 102, -1);
        return maximumMoney ( nums, 0, dp) ;
    }
};