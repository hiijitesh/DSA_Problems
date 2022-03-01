class Solution {
public:
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<vector<int> > ans;
        int n=graph.size();
        
        vector<int> visited( n,0);
        vector<int> path;
         
        sourceToPath(graph, 0, n, visited,path, ans);
        return ans;
    }
    
    void sourceToPath(vector<vector<int>>& graph, int currNode, int n, vector<int> &visited, vector<int> currPath, vector<vector<int> > &ans   )
    {
        if( currNode== n-1){
            currPath.push_back(currNode);
            ans.push_back(currPath);
            // backtracking the while returning
            currPath.pop_back();
            return ;
            
            
        }
        if(visited[currNode]){
            return;
        }
        visited[currNode]=1;
        currPath.push_back(currNode);
        
        for ( auto neighbour:graph[currNode]){
            sourceToPath(graph,neighbour,n, visited,currPath, ans);
        }
        visited[currNode]=0;
        currPath.pop_back();
        return;
    }
};