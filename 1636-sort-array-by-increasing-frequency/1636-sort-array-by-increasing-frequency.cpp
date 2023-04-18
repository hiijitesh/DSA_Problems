bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second == b.second) 
        return a.first > b.first;
    return a.second < b.second;
}
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        vector<int> ans;
        for(auto &num: nums)
            mp[num]++;
        
        vector<pair<int, int>> elem;
        
        for(auto &it:mp)
            elem.push_back({it.first, it.second});
        
       sort(elem.begin(), elem.end(), cmp);
        
        for(auto &val:elem)
        {
            while(val.second > 0)
            {
                ans.push_back(val.first);
                val.second--;
            }
        }
        return ans;
    }
};