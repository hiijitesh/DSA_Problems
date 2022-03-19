class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n= nums.size();
        int dp[n+1];
        
        if( n <1 ) return 0;
        if( n <2 ) return nums[0];
        
        dp[0] = nums[0];
        dp[1] = max(dp[0], nums[1]);
        
        for( int i=2; i<n; i++){
            //in first para what i did is i robbed that house so back of minus 2 house will also had robed, in second paara i assume that i have not robbed that house so just adjecnt back will get robbed
            dp[i] = max( nums[i] + dp[i-2], dp[i-1]);
        }
        return dp[n-1];
        
        
    }
};