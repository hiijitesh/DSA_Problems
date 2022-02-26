// class Solution {
    
// public:  
//     //tabulation
//     int myTribo( int n, vector<int> &dp){
        
//         // dp[0]=0, dp[1]=1, dp[2]=1;
//         int p3=1;
//         int p2=1;
//         int p1=0;

//         for ( int i=3; i<=n; i++){
            
//             // dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
            
//             int currTribo= p3+p2+p1;
            
//             p3= currTribo;
//             p2=p3;
//             p1=p2;
//         }
        
//         return p3;
//     }
// //     int trib ( int n,unordered_map<int,int> &mp ){
        
// // //         if ( n==0 ) return 0;
        
// // //         if (n==1 || n==2 ) return 1;
        
// // //         int key= n;
        
// // //         if( mp.find(key) != mp.end() ) return mp[key];
        
// // //         mp[key]= trib(n-1 ,mp) + trib(n-2 ,mp) + trib(n-3, mp); 
        
// // //         return mp[key];
        
        
        
// //     }
    
//     int tribonacci(int n ) {
        
//        // unordered_map<int,int> mp;
//         vector<int> dp(31, -1);
        
//        // return trib(n,mp);
//         return myTribo(n,dp);
        
        
//     }
// };

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