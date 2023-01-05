class Solution {
public:
    bool haveConflict(vector<string>& e1, vector<string>& e2) {
        
        return ( e1[0] <= e2[1] and e1[1] >= e2[0]);
        
    }
};