class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, totalSum = INT_MIN;

        for(auto &num:nums){

            currSum += num;
            totalSum = max(currSum, totalSum);
            if(currSum < 0)
                currSum = 0;
        }
        return totalSum;
    }
};