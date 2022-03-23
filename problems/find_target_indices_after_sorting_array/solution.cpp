class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        vector<int> ans;
        int cnt = 0, rank = 0;
        
        for(auto element :nums){
             if(element == target) cnt++;
             if(element < target) rank++;
        }
        
        while(cnt--){
            ans.push_back(rank++);
        }
        
        return ans;
        
    }
};