class Solution {
public:
    bool check(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' | ch == 'o' || ch == 'u');
    }
    int maxVowels(string s, int k) {
      
      int ans = 0, n = s.size();
      int count = 0;
      for(int i = 0; i < k; i++) {
          if(check(s[i])) count++;
      }
      ans = count;
  // build first window size k
      for(int  i = k; i < n; i++) {
    // remove the contribution of the (i - k)th character which is no longer in the window
          if(check(s[i - k]))
            count--;
    // add the contribution of the current character
          if(check(s[i])) count++;
    // update max at for each window of size k
          ans = max(ans, count);
      }
      return ans;
  }
};