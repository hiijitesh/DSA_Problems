class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        
        int start = 0, end = nums.size() - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] == target)
                return mid;
            
            //check if left side is stricly increasing(sorted)
            if(nums[mid] >= nums[start])
            {
                //check if target does exists in left side strickly increasing side
                if(target <= nums[mid] && target >= nums[start])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            //right side is stricly increasing
            else
            {
                if(target >= nums[mid] && target <= nums[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }
};