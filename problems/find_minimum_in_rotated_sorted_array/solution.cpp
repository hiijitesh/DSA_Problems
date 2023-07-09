class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int start = 0, end = nums.size()-1;
        int res = nums[0];
        
        while(start <= end)
        {
            //check if array is already sorted in ascending order
            if(nums[start] < nums[end])
            {
                res = min(res, nums[start]);
                break;
            }
            int mid = start + (end - start) /2;
            //there is chance that nums[mid] can be a minimum value in the whole array
            res = min(res, nums[mid]);
            //check the direction to move, move to the right 
            if(nums[mid] >= nums[start])
                start = mid + 1;
            else
                end = mid -1;
        }
        return res;
    }
};