class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int start = 0, end = nums.size()-1;
        int n = nums.size();
		if(nums.size() == 1) return 0; // single element
        
		// // check if 0th/n-1th index is the peak element
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        while(start <= end)
        {
            int mid = start + (end - start)/2;

            if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1])
                return mid;

            else if(nums[mid] < nums[mid+1])
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
};


