class Solution {
public:
    int maxRobbedMoney( vector<int> &nums, int currHouse, vector<int> &dp){
        
         if( currHouse >= nums.size()) return 0;
        
         if( dp[currHouse] != -1) return dp[currHouse];
        
         int robbed= nums[currHouse] + maxRobbedMoney(nums,currHouse+2, dp);  
         int notRobbed = maxRobbedMoney(nums, currHouse+1, dp);
        
         return dp[currHouse] = max(robbed, notRobbed);
    }
    int rob(vector<int>& nums) {
        
        vector<int> dp(102,-1);
        
        return maxRobbedMoney( nums, 0, dp);
        
    }
};