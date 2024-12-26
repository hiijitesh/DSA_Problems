class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int start = 0, end = nums.size()-1;

        while(start<=end){
            int mid = start + (end-start)/2;
            // cout<<mid<<"mid";

            if(mid < nums.size()-1 && nums[mid+1] > nums[mid]){
                start = mid+1;
            }
            else if(mid > 0 && nums[mid-1] > nums[mid]){
                end = mid-1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};