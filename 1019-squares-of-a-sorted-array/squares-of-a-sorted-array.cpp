class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        // andIdx = nums.size()-1;

        vector<int> ans;

        while(start<=end){
            int sqrLeft = nums[start]*nums[start];
            int sqrRight = nums[end]*nums[end];

            if(sqrLeft >= sqrRight){
                ans.push_back(sqrLeft);
                start++;
            }else{
                ans.push_back(sqrRight);
                end--;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};