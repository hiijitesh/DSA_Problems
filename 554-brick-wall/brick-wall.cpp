class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int, int> mp;

        for(auto& row:wall){
            int currWall = 0;
            for(int i = 0; i < row.size()-1; i++){
                currWall+=row[i];
                mp[currWall]++;
            }
        }
        // finding maxium element

        int maxEdge = 0;
        for(auto&m:mp){
            maxEdge = max(maxEdge, m.second);
        }
        
        return wall.size()-maxEdge;
    }
};