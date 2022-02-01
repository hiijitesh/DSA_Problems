class Solution {
    private:
    
    void sourceToPath (vector<vector<int>>& graph, int currNode,vector<bool> & visited,int n, vector<int> &currPath,vector<vector<int>> &ans){
        
        if( currNode == n-1){
            
            currPath.push_back(currNode);
            ans.push_back(currPath);
            currPath.pop_back();
            return;
            
        }
        if(visited[currNode]){
            return;
        }
        
        visited[currNode]=false;
        currPath.push_back(currNode);
        
        for( auto neighbour: graph[currNode]){
            sourceToPath(graph,neighbour,visited,n,currPath,ans);
        }
        visited[currNode]=false;
        currPath.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        
        int n = graph.size();
        
        vector<bool> visited(n);
        vector<int> currPath;
        
        sourceToPath( graph,0,visited,n,currPath,ans);
        
        return ans;
        
    }
};