// class Solution {
// public:
//     vector<int> findOriginalArray(vector<int>& changed) {
        
//     }
// };

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& A) {
        if (A.size() % 2) return {};
        multiset<int> s(begin(A), end(A));
        vector<int> ans;
        for (int i = 0; i < A.size(); i += 2) {
            int n = *s.begin();
            ans.push_back(n);
            s.erase(s.begin());
            if (s.find(2 * n) == s.end()) return {}; // Don't use `s.count(2 * n) == 0` here since it's an `O(N)` operation for `multiset`.
            s.erase(s.find(2 * n));
        }
        return ans;
    }
};