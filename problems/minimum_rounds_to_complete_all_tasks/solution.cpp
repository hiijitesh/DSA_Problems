class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        unordered_map<int, int> mp;
        int ans = 0;
        
        for(int i = 0; i < tasks.size(); i++)
        {
            mp[tasks[i]]++;
        }
        
        for(auto &it : mp)
        {
            int freq = it.second;
            int div = freq / 3;
            
            if(freq == 1)
                return -1;
            
            if(freq % 3 ==0)
                
                ans+=div;
            
            else
            {
                ans += div + 1;
            }
        }
        
        return ans;
    }
};