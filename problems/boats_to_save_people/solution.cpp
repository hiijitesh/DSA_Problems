class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(), people.end());
        int ans = 0;
        int low = 0, high = people.size()-1;
        
        while(low <= high)
        {
            int currWeight = people[low] + people[high];
            
            if(currWeight <= limit)
            {
                ans ++;
                low++;
                high--;
            }
            else{
                ans++;
                high--;
            }
        }
        return ans;
    }
};