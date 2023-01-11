class Solution {
public:
    int dfs(int c,int p,vector<int> adj[],vector<bool>& hasApple)
    {
        int t=0;
        for(auto i:adj[c])
        {
            if(i==p)
            continue;

            int co=0;
            co=dfs(i,c,adj,hasApple);

            if(co || hasApple[i])
            t+=co+2;
        }
        return t;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {

        vector<int> adj[n];

        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        return dfs(0,-1,adj,hasApple);
    }
};