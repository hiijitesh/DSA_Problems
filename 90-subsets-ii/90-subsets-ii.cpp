class Solution {

private: 
    void generateAllSubsets(vector<int> &nums, int currentIndex, vector<int>&currentSet, set<vector<int>> &result){
        
        // Base case // if we reached at last index then we can push back aur current set to result
        if(currentIndex >= nums.size()){
            result.insert(currentSet);
            return;
        }
        
        //we wiil take one element from nums array 
        int currentValue = nums[currentIndex];
        
        //if we consider that currentValue element then we push back into current set and move to next index 
        currentSet.push_back(currentValue);
        
        //call to consider branch
        generateAllSubsets(nums, currentIndex+1, currentSet, result);
        
        // while returning we have to pop back those element that was added last time because we are printing the subset so its should be dlted after printing
        currentSet.pop_back();
        
        // call to not consider branch
        generateAllSubsets(nums, currentIndex+1, currentSet, result);
        
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        set<vector<int>> result;
        
        vector<int> currentSet;
        
        sort(nums.begin(), nums.end());
        
        generateAllSubsets(nums, 0, currentSet, result);
        
        vector<vector<int>> ans(result.begin(), result.end());
        return ans;
    }
    
    
};