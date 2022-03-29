class Solution {
public:
    double average(vector<int>& salary) {
        
        double sum=0;
        
        int mini= *min_element(salary.begin(), salary.end());
        int maxi= *max_element(salary.begin(), salary.end());
        
        for( auto it: salary){
            sum += it;
        }
        // cout<<sum<< " "<<maxi<<" " <<mini;
        
         // cout<<"sum BABA"<< sum-(mini+maxi);
        return (sum-(mini+maxi))/(salary.size() - 2);
    }
};

// class Solution {
// public:
//     double average(vector<int>& salary) {
//         if(salary.size()==2) return 0;
//         int mins = INT_MAX;
//         int maxs = INT_MIN;
//         double sum = 0;
//         for(int x: salary){
//             mins = min(mins,x);
//             maxs = max(maxs,x);
//             sum+=(double)x;
//         }
//         return (sum - (mins+maxs)) / (salary.size()-2);
//     }
// };