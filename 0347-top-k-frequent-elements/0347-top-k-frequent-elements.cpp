class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int, int> mp;
        vector<int> ans;
        
        for(auto &x:nums)
            mp[x]++;
        
        // define custom comparator function to sort by value in decreasing order
        auto cmp = [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        };
        
        // create a vector of pairs from the map and sort it using the custom comparator
        vector<pair<int, int>> pairs(mp.begin(), mp.end());
        sort(pairs.begin(), pairs.end(), cmp);
        
        // add the first k keys (which have the highest values) to the answer vector
        for(int i = 0; i < k; i++) {
            ans.push_back(pairs[i].first);
        }
        
        return ans;
    }
};
