class Solution {
public:
    
    void dfs(int num, int n, int k, vector<int> &ans)
    {
        if(n == 1)
        {
            ans.push_back(num);
            return;
        }
        
        int num1 = num%10;
        if(num1 - k >= 0){
            dfs(num*10+ (num1 - k), n-1, k, ans);
        }
    
        if( k && num1 + k < 10){
            dfs(num*10 +(num1 + k), n-1, k, ans);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        
        vector<int> ans;
        
        for(int i = 1; i <10; i++)
        {
            dfs(i, n, k , ans);
        }
        return ans;
    }
};