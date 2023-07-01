class Solution {
private:
    void genereate(int n, int open, int close, string currRes, vector<string> &ans){

        if(open == n && close == n){
            ans.push_back(currRes);
            return;
        }

        if(open < n){
            genereate(n, open+1, close, currRes+"(", ans);
        }
        if(open > close){
            genereate(n, open, close+1, currRes+")", ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        genereate(n, 0, 0, "", ans);
        return ans;
    }
};