class Solution {
public:
        
    int trib( int n,unordered_map<int,int> &mp ){
        
        if ( n==0 ) return 0;
        
        if (n==1 || n==2 ) return 1;
        
        int key= n;
        
        if( mp.find(key) != mp.end() ) return mp[key];
        
        mp[key]= trib(n-1 ,mp) + trib(n-2 ,mp) + trib(n-3, mp); 
        
        return mp[key];
        
        
        
    }
    
    int tribonacci(int n ) {
        
       unordered_map<int,int> mp;
        
       return trib(n,mp);
        
        
    }
};