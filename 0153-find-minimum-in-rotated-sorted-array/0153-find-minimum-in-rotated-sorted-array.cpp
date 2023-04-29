class Solution {
public:
    int findMin(vector<int>& nums) {
        
        
        int s = 0, end = nums.size()-1;
        int res = nums[0];
        
        while(s <= end)
        {
            
            if(nums[s] < nums[end])
            {
                res = min(res, nums[s]);
                break;
            }
            
            int mid = s + (end - s)/2;
            
            res = min(res, nums[mid]);
            
            if(nums[mid] >= nums[s])
                s = mid + 1;
            
            else
                end = mid -1;
        }
        return res;
    }
};