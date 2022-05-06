class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(), people.end());
        int light = 0, heavy = people.size() - 1;
        
        int ans = 0;
        
        while( light <= heavy)
        {
            int sum = people[light] + people[heavy];
            
            if(sum <= limit){
                ans++;
                light++;
                heavy--;
            }
            
            else {
                ans++;
                heavy--;
            }
                
            
        }
        return ans;
    }
};