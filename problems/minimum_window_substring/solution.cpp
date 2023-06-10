class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<char, int> mp;
        int minlen=INT_MAX, start=0;
        for(auto ch:t){
            mp[ch]++;
        }

        int i=0,j=0,count=mp.size();
        while(j<s.length())
        {
            if(mp.find(s[j])!=mp.end())
            {
                mp[s[j]]--;
                if(mp[s[j]]==0)
                    count--;
            }
            if(count==0)
            {
                while(count==0)
                {
                    if(mp.find(s[i])!=mp.end())
                    {
                        mp[s[i]]++;
                        if(mp[s[i]]==1)
                        {
                            count++;
                            if(j-i+1<minlen){
                                minlen=j-i+1;
                                start=i;
                            }
                        }
                    }
                    i++;
                }  
            }
            j++;
        }
        if(minlen==INT_MAX) return "";
        return s.substr(start, minlen);
    }
};