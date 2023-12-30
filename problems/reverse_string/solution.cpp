class Solution {
public:
    void reverseString(vector<char>& str) {
        int i = 0;
        int j = str.size()-1;
        solve(str, i, j);
    }
    
    void solve(vector<char>& str, int i, int j){
        
        if(i >= j) return;
        
        // swap
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        
        solve(str, ++i, --j);
    }
};