class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int, int>> arr;
        
        for(int i = 0; i < nums.size(); i++)
        {
           arr.push_back({nums[i], i});
        }
        
        //sort it so for using two pointer
        sort(arr.begin(), arr.end());
        
        int i = 0, j = nums.size()-1;
        
        while(i < j)
        {
            int currSum = arr[i].first + arr[j].first;
            
            if(currSum == target) return {arr[i].second, arr[j].second};
            
            else if(currSum > target) j--;
            
            else i++;
        }
        //return empty array
        return {};
        
    }
};