class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        
        unordered_map<int, int> mp;
        
        for(int i = 0; i < arr.size(); i++)
        {
            int rem = 0;
            
            if(arr[i]<0)
                rem = ((arr[i] % k) + k) % k;
            else
                
                rem = arr[i] % k;
           
            if(mp.find(rem)== mp.end())
                mp[rem] = 1;
            else
                mp[rem]++;
        }
        
        for(auto &key  : mp)  { 
           
            if(key.first ==0)
            {
                if(mp[key.first] %2 != 0)
                    return false;
            } 
            
            else if(mp.find(k - key.first)== mp.end())
                return false;
            
            else if(mp[key.first] != mp[k - key.first])
                return false;
                
        }
        
        return true;
    }
};