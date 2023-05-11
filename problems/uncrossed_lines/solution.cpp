class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        
        // padding one dummy -1 to represent empty list
        nums1.insert( nums1.begin(), -1);
        nums2.insert( nums2.begin(), -1);
        
        const int h = nums1.size(), w = nums2.size();
        
        vector< vector<int> > dp( h, vector<int>(w, 0) );
        
        for( int y = 1 ; y < h ; y++){
            for( int x = 1 ; x < w ; x++){
                
                if( nums1[y] == nums2[x] ){
                    // current number is matched, add one more uncrossed line
                    dp[y][x] = dp[y-1][x-1] + 1;
                    
                }else{
                    // cuurent number is not matched, backtracking to find maximal uncrossed line
                    dp[y][x] = max( dp[y-1][x], dp[y][x-1]);
                }
            }
        }
        return dp[h-1][w-1];
    }
};