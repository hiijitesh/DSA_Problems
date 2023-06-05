class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        //if slope of two point is same then it is straight line

        int n = coordinates.size();

        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int x1 = coordinates[1][0], y1 = coordinates[1][1];

        int dx = x1-x0, dy = y1 - y0;

        for (auto co : coordinates) {
            int x = co[0], y = co[1];
            // cout<<x<<" "<<y<<" ";
            if (dx * (y - y1) != dy * (x - x1))
                return false;
        }

        return true;
    }
};