class Solution {
public:
    void generateCombination(int idx, vector<int>&nums, int target, vector<int>&curr,  vector<vector<int>>&result){

        if(target == 0){
             result.push_back(curr);
             return;
        }

        if(idx >= nums.size()){
           return;
        }

        int currVal = nums[idx];
        if(currVal <= target){
        curr.push_back(currVal);
        generateCombination(idx, nums, target-currVal, curr, result);
        curr.pop_back();
        }
        generateCombination(idx+1, nums, target, curr, result);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int>curr;
        generateCombination(0, nums, target, curr, result);
        return result;
    }
};