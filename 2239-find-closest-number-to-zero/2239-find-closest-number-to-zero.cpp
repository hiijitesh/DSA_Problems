class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        int ans = INT_MAX;
        int n = nums.size();
        
        for(int i = 0; i <n; i++)
        { 
            if(abs(nums[i]) < abs(ans))
                ans = nums[i];
            
            else if (abs(nums[i]) == abs(ans))
            {
                ans = max(ans, nums[i]);
            }
        }
        
        return ans;
        
    }
};