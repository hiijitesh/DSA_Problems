class Solution {
public:
    bool isFascinating(int n) {
        
        string str1 = to_string(n);
        string str2 = to_string(2*n);
        string str3 = to_string(3*n);
        
        string str = str1 + str2 + str3;
        
        unordered_map<char, int> mp;
        
        for(auto &c : str)
        {
            if(mp.find(c)!=mp.end() || c =='0')
                return false;
            mp[c]++;
        }
        return true;        
    }
};