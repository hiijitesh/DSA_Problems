class Solution {
public:
    void totalPalindrome(string s, int i , int j, int &count){
        // int count = 0;
        while( i >=0 and j < s.size() && (s[i] == s[j])){
            count++;
            i--;
            j++;
        }
        // return count;
    }
    int countSubstrings(string s) {
        int ans = 0;

        for(int i = 0; i < s.size(); i++){
            totalPalindrome(s, i,i, ans);
            totalPalindrome(s, i,i+1,ans);
        }
        return ans;
    }
};