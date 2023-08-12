class Solution {
public:
    void dfs(string str, int start, int end, vector<string>&curr, vector<vector<string>>&result){

        if(start>end){
            result.push_back(curr);
            return;
        }

        for(int i = start; i <= end; i++){
            if(isPalindrom(start, i, str)){
                curr.push_back(str.substr(start, i-start+1));
                dfs(str, i+1, end, curr, result);
                curr.pop_back();
            }
        }
    }
    bool isPalindrom(int start, int end, string str){

        while(start<=end){
            if(str[start++]!=str[end--])
                return false;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> curr;
        dfs(s, 0, s.size()-1, curr, result);
        return result;
    }
};