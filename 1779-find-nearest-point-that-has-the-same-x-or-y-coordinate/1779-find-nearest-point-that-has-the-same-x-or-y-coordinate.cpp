class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points)
    {
        
        int index = -1;
        
        int ans = INT_MAX;
        
        for(int i = 0; i< points.size(); i++)
        {
            
            if(points[i][0] == x || points[i][1] == y)
            {
                int manhattan_dist = abs( x- points[i][0]) + abs(y- points[i][1]);
                
                if(manhattan_dist < ans)
                {
                    ans = manhattan_dist;
                    index = i;
                }
            }
        }
        return index;
        
    }
};
