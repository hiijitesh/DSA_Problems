// class Solution {
// public:
//     int solve( vector<int> &nums, int n, int ci){

//         if ( n <= 1 ) return n;
//         if( ci >= nums.size() ) return 0;
        
//         int consider =0;
//         if( nums[ci] <= n){
//             consider = 1+ solve( nums, n-nums[ci],ci);
//         }
//         int notconsider = solve( nums, n,ci+1);    
//         return consider+ notconsider;
//     }
//     int numSquares(int n) {
        
//         vector<int> nums(n+1);
        
//         for ( int i=1; i*i <= n ; i++){   
//                nums[i]= i*i;        // cout<<nums[i];
//         } 
//         return solve( nums,n,0);
        
      
//     }
// };

// not mine code
class Solution {
public:
    
    int numsreq(int target , int curr,vector<vector<long>>&vec)
    {
        if(target == 0) return 0;
        if(target-(curr*curr)<0) return 10001;
        if(vec[curr][target]!=-1) return vec[curr][target];
        int consider = 10001;
        if(target-(curr*curr)>=0)
        {
            consider = 1+numsreq(target-(curr*curr),curr,vec);
        }
        int notconsider = numsreq(target,curr+1,vec);
        vec[curr][target]= min(consider,notconsider);
        return min(consider,notconsider);
    }
    int numSquares(int n) {
        vector<vector<long>>vec(sqrt(n)+10,vector<long>(n+1,-1));
        return numsreq(n,1,vec);
        
        
    }
};