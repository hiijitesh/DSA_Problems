class Solution {
public:
    double average(vector<int>& salary) {
        
        double sum = 0;
        
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for( auto it: salary){
            mini = min(mini, it);
            maxi = max(maxi, it);
            sum += it;
        }
        
        return (sum-(mini+maxi))/(salary.size() - 2);
    }
};