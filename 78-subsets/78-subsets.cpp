class Solution {

private: 
    void generateAllSubsets(vector<int> &nums, int currentIndex, vector<int>&currentSet, vector<vector<int>> &result){
        
        if(currentIndex >= nums.size()){
            result.push_back(currentSet);
            return;
        }
        
        int currentValue = nums[currentIndex];
        currentSet.push_back(currentValue);
        generateAllSubsets(nums, currentIndex+1, currentSet, result);
        
        currentSet.pop_back();
        generateAllSubsets(nums, currentIndex+1, currentSet, result);
        
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> result;
        
        vector<int> currentSet;
        
        generateAllSubsets(nums, 0, currentSet, result);
        return result;
    }
    
    
};