class Solution {
public:
    
    
    int totalways( int amount, int currIndex, vector<int> & coins, unordered_map<string, int> &mp){
          
        if( amount==0) return 1;
        
        if( currIndex >= coins.size()) return 0;
        
        string key= to_string(currIndex)+ "_" + to_string(amount);
        
        if( mp.find(key) != mp.end()) return mp[key];
        
        int include=0;
        if( coins[currIndex] <= amount){
            
            include= totalways(amount-coins[currIndex], currIndex,coins,mp);   
            
        }
        
        int ex=totalways(amount, currIndex+1 , coins,mp); 
        
        return mp[key]=include+ ex;
    }
    
    int change(int amount, vector<int>& coins) {
        
        unordered_map<string,int> mp;
        
        return totalways( amount,0, coins,mp);
        
    }
};