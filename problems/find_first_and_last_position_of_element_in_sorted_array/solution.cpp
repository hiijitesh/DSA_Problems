class Solution {
public:
    
    int firstIndex(vector<int>&nums, int target)
    {
        int lo = 0, hi = nums.size()-1;
        
        int ans = -1;
        
        while(lo <= hi)
        {
            int mid = lo + (hi -lo)/2;
            
            if(target > nums[mid])
            {
                lo = mid+1;
            }
            else if(target < nums[mid])
            {
                hi = mid-1;
            }
            else
            {
                ans = mid;
                hi = mid -1;
            }
        }
        
        return ans;
    }
    
    
    int lastIndex(vector<int> &nums, int target)
    {
        int lo = 0, hi = nums.size()-1;
        
        int ans = -1;
        
        while(lo <= hi)
        {
            int mid = lo + (hi - lo)/2;
            
            if(target > nums[mid])
            {
                lo = mid+1;
            }
            else if(target < nums[mid])
            {
                hi = mid - 1;
            }
            else
            {
                ans = mid;   
                lo = mid + 1;
            }
        }
        
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans(2, -1);
        ans[0] = firstIndex(nums, target);
        ans[1] = lastIndex(nums, target);
        
        return ans;
    }
       
};