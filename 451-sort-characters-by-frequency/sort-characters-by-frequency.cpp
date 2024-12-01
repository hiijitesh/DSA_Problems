class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        priority_queue<pair<int, char>> pq;

        for(auto& ch:s)
            mp[ch]++;

        for(auto& m:mp)
            pq.push({m.second, m.first});
        
        string res = "";
        while(pq.size()>0){
            res += string(pq.top().first, pq.top().second);
            pq.pop();
        }
        return res;
    }
};