class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        
        int leftSum[n];
        int rightSum[n];
        
        leftSum[0] = nums[0];
        rightSum[n-1] = nums[n-1];
        
        for(int i = 1; i < n; i++)
        {
            leftSum[i] = leftSum[i-1] + nums[i];
            rightSum[n-i-1] = rightSum[n-i] + nums[n-1-i];
        }
        
        for(int i = 0; i < n; i++)
        {
            if(leftSum[i] == rightSum[i]) return i;
        }
        
        return -1;
        
    }
};