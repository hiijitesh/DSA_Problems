class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> dp(n, 0);
        
        // dp[0] = 1;
        int ans = 0;
        
        for(int i = 0; i < n; i++)
        {
            int maxi = 0;
            for(int j = 0; j < i; j++)
            {
                if(nums[i] > nums[j])
                {
                    if(dp[j] > maxi)
                        maxi = dp[j];
                }
                
            }
            dp[i] = maxi + 1;
            ans = max(ans, dp[i]);
        }
        
        return ans;
    }
};