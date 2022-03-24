class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size()+1, -1);
        return isPossible(nums, 0, dp);

    }
   private: 
      int isPossible(vector<int> &nums, int currIndex,  vector<int> &dp){
        
          if(currIndex >= nums.size()-1) return 0;
          if(nums[currIndex] == 0) return 10001;
          
          if(dp[currIndex] != -1) return dp[currIndex];
          int ans = 10001;
        
          int currJump = nums[currIndex];
          for( int i=1; i<= currJump; i++){
            
               int tempAns= 1 + isPossible(nums, currIndex + i, dp);
            
               ans = min(ans , tempAns );
          }
          
         return dp[currIndex] = ans;
    }
};