class Solution {
public:
     int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        
        sort(players.begin(),players.end(),greater<int>());
        priority_queue<int>pq(trainers.begin(),trainers.end());
        
        int ans =0,i=0;
        
         while(i<players.size() and pq.size()>0){
             
             if(players[i]<=pq.top()){
                 ans++;
                 pq.pop();
             }
             
             i++;
         }
        
            return ans;
        
    }
};