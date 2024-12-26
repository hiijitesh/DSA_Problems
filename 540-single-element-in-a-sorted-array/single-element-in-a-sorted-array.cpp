class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int start = 0, end = nums.size()-1, ans = -1, mid;

        if(nums.size() == 1) return nums[0];

        while(start <= end){

             mid = start + ((end - start)>>1);
            //  cout<<"MID=> "<<mid<<" "<<endl;
            if(mid & 1) mid--;

            

            if(nums[mid] == nums[mid+1]){
                start = mid+2;
            }else{
                end = mid -1;
                ans = nums[mid];
            }    
        }
        return ans;
    }
};