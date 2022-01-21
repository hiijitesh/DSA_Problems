class Solution {
public:
    
      int jumpSolver( vector<int> & nums, int CI, vector<int> &dp){
        
        if ( CI >= nums.size()-1 ) return 0;
          
        int key = CI;
          
        if(dp[key] != -1) return dp[key];
        
        int currJump= nums[CI];
        
        int  ans= 10001;
        
        for( int i=1; i<=currJump; i++ ){
            
            int tempAns= 1 + jumpSolver( nums, CI+ i, dp);
            
            ans = min(ans , tempAns );
        }
        
        return dp[key] =ans;
    }
    
    int jump(vector<int>& nums) {
        
        vector<int> dp(nums.size()+1, -1);
        
        return jumpSolver( nums,0,dp);
        
    }
};