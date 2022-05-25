class Solution {
    
private:
    
    void totalUniqueCombinations(vector<int>& nums, int currentIndex, int target, vector<int> &currentSet, vector<vector<int>> &result){
        
        //base case
        // we we reached at last index or our target became zero
        if(target == 0){
            result.push_back(currentSet);
            return;
        }
        if(currentIndex >= nums.size()) {
            return;
        }
        
        
        
        int currentValue = nums[currentIndex];
        
        //consider branch
        if(currentValue <= target){
            currentSet.push_back(currentValue);
            totalUniqueCombinations(nums, currentIndex, target-currentValue, currentSet, result);
            currentSet.pop_back();
        }
        
        
        //do not consider 
        totalUniqueCombinations(nums, currentIndex+1, target, currentSet, result);
        
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> currentSet;
        
        totalUniqueCombinations(nums, 0, target, currentSet, result);
        return result;
    }
};