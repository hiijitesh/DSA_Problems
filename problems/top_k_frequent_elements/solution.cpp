bool cmp(const pair<int, int> &a, const pair<int, int> &b){
        
    
        return a.second > b.second;
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;

        for(auto &num:nums) 
            mp[num]++;


        vector<pair<int, int>> smap(mp.begin(), mp.end());
        sort(smap.begin(), smap.end(), cmp);


        for(int i = 0; i < k; i++)
            ans.push_back(smap[i].first);

        return ans;



    }
};