class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int s = 0, e = nums.size()-1, ans = -1;

        while(s <= e){
            int mid = s + (e-s)/2;
            int currNum = nums[mid];

            if(target == currNum){
                return mid;
            }
            
            else if(target < currNum){
                ans = mid;
                e = mid-1;
            }else{
                s = mid+1;
            }
            
        }

        if(ans == -1)
            ans = nums.size();
        return ans;
    }
};