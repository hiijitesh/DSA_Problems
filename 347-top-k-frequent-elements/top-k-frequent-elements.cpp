class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        if(k == nums.size()) return nums;
        unordered_map<int, int> mp;
        vector<int> ans(k);

        for(auto& num:nums) mp[num]++;
        priority_queue<pair<int, int> > pq;

        for(auto& ele:mp){
            pq.push({ele.second, ele.first});
        }

        for(int i = 0; i < k; i++){
            ans[i] = pq.top().second;
            pq.pop();
        }

    return ans;
        
    }
};