class Solution
{
    public:
        bool static comp(pair<int, int> a, pair<int, int> b)
        {
            if (a.second == b.second)
                return a.first > b.first;

            return a.second < b.second;
        }

    vector<int> frequencySort(vector<int> &nums)
    {

        unordered_map<int, int> mp;
        for(auto &num :nums)
            mp[num]++;
        
        vector<int> ans;
        vector<pair<int, int>> vec;
        for (auto pr: mp)
        {
            // cout<<pr<<" ";
            vec.push_back(pr);
        }
        sort(vec.begin(), vec.end(), comp);

    
        for (int i = 0; i < vec.size(); i++)
        {
            while (vec[i].second > 0)
            {
                ans.push_back(vec[i].first);
                vec[i].second--;
            }
        }
        return ans;
    }
};