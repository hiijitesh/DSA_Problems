class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        // vector<int> ans;
        
        int i = 0, j = n-1;
        while(i < j)
        {
            int sum = nums[i] + nums[j];
            
            if(sum == target){
               return {i+1, j+1};
            }
            
            if( sum > target){
                j--;
            }
            else
                i++;
        }
        
        return {};
        
    }
};