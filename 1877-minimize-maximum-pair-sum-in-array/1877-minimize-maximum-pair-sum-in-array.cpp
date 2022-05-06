class Solution {
public:
    int minPairSum(vector<int>& nums) 
    {
        
        sort(nums.begin(), nums.end());
        
        int left = 0, right = nums.size()-1;
        
        int ans = INT_MIN;
        
        while(left < right)
        {
         
            int sum = nums[left] + nums[right];
            
            ans = max(ans, sum);
            left++;
            right--;
        }
        
        return ans;
        
    }
};