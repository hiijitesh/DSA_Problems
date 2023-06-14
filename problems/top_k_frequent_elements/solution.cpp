class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        vector<int> ans;
        priority_queue<pair<int, int>> maxheap;

        for(auto &num:nums)
            mp[num]++;

        //store the pair of {freq, ele} in heap until heap size < map.size - k
        //why map.size -k??? coz if we need k = 2 then we need to  populate the k frequent element 
        for(auto &m:mp)
        {
            maxheap.push({m.second, m.first});
            while(maxheap.size() > (mp.size() - k))
            {
                ans.push_back(maxheap.top().second);
                maxheap.pop();
            }
        }
        return ans;
    }
};