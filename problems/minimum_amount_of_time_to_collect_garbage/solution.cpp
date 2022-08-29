class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int ans = 0;
        
        int lastG = 0, lastP = 0, lastM = 0;
        int countG = 0, countP = 0, countM = 0;
        
        vector<long long > prefix(travel.size()+1);
        prefix.push_back(0);
        
        //taking the prefix sum of travel time
        for(int i = 1; i <= travel.size(); i++)
            prefix[i] = prefix[i-1] + travel[i-1];
        
        //take the last and count if the materials
        
        for(int i = 0; i < garbage.size(); i++)
        {
            string s = garbage[i];
            
            for(auto c :s)
            {
                if(c == 'G') lastG = i, countG++;
                if(c == 'P') lastP = i, countP++;
                if(c == 'M') lastM = i, countM++;
            }
        }
        
        if(countG) ans+= (countG + prefix[lastG]);
        if(countM) ans+= (countM + prefix[lastM]);
        if(countP) ans+= (countP + prefix[lastP]);
        
        return ans;
    }
};