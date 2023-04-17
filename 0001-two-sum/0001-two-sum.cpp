class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> ans(n);
        
        for(int i = 0; i<n; i++){
            ans[i] = make_pair(nums[i], i);
        }
        
        sort(ans.begin(), ans.end());
        
        int i = 0, j = n-1;
        
        while(i < j){
            
            int sum = ans[i].first + ans[j].first;
            
            if(sum == target){
                return {ans[i].second, ans[j].second};
            }
            if( sum > target) j--;
            
            else
                i++;
        }
        return {};
       
    }
};

