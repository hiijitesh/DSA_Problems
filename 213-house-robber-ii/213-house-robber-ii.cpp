class Solution {

    private:
    
    int maxMoney ( vector<int> &nums){
         
        int n= nums.size();
        int dp[n+1];
        
        dp[0] = nums[0];
        dp[1] = max(dp[0], nums[1]);
        
        for( int i=2; i<n; i++){
 
            dp[i] = max( nums[i] + dp[i-2], dp[i-1]);
        }
        return dp[n-1];
    }
public:
    int rob(vector<int>& nums) {
        int n=  nums.size();
        if( n ==0 ) return 0;
        if( n ==1 ) return nums[0];
        if( n ==2 ) return max(nums[0], nums[1]);
        
        vector<int> firstCycle(nums.begin(), nums.end()-1);
        vector<int> secondCycle(nums.begin()+1, nums.end());
        
        return max(maxMoney(firstCycle), maxMoney(secondCycle));
        
       
    }
};