
bool cmp(const pair<string, int> &a, const pair<string, int> &b){
        
        if(a.second == b.second) return a.first < b.first;
    
        return a.second > b.second;
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        vector<string> ans;
        unordered_map<string, int> mp;
        
        //store the count of each string of given words
        for(auto &x: words) 
        {
             mp[x]++;
        }
        
        //storing the frequency count from map,  in vector  pair like {string, count}
        vector<pair<string, int>> smap(mp.begin(), mp.end());
        // sorting the smap descending order using cmp
        sort(smap.begin(), smap.end(), cmp);
        
        for(int i = 0; i < k; i++)
        {
            ans.push_back(smap[i].first);
        }
        return ans;
    }
};