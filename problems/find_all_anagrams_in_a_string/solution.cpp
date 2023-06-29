class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (s.size() < p.size())
            return {};

        vector<int> mp1(26, 0), mp2(26, 0);
        for (char ch : p)
            mp1[ch - 'a']++;

        vector<int> ans;
        int aq = 0, rel = 0, k = p.size();

        while (aq < s.size()) {
            mp2[s[aq] - 'a']++;

            // Check if the current window is larger than 'p'
            if (aq - rel + 1 > k) {
                mp2[s[rel] - 'a']--;
                rel++;
            }

            // Check if the current window is of size 'p'
            if (aq - rel + 1 == k) {
                if(mp1 == mp2) ans.push_back(rel);
            }

            aq++;
        }
        return ans;
    }
};
