class Solution {
public:
    bool wordPattern(string p, string s) {
        // Create a vector to store the words in s
        vector<string> s_list;
        // Word variable to store each word in s
        string word;
        // Create a string stream from s
        stringstream iss(s);
        // Push each word in s_list
        while (iss >> word)
            s_list.push_back(word);

        // Return false if p and s_list have different lengths
        if (p.size() != s_list.size()) return false;

        // Initialize unordered maps for mappings between p and s_list
        unordered_map<string, char> s2p;
        unordered_map<char, string> p2s;

        // Iterate through elements of s_list
        for (int i = 0; i < s_list.size(); ++i) {
            // Check if s_list[i] is not in s2p
            if (s2p.count(s_list[i]) == 0) {
                // Add mapping from s_list[i] to p[i] to s2p
                s2p[s_list[i]] = p[i];
            }
            // Check if mapping from s_list[i] to p[i] is invalid
            else if (s2p[s_list[i]] != p[i]) {
                // Return false if mapping is invalid
                return false;
            }

            // Check if p[i] is not in p2s
            if (p2s.count(p[i]) == 0) {
                // Add mapping from p[i] to s_list[i] to p2s
                p2s[p[i]] = s_list[i];
            }
            // Check if mapping from p[i] to s_list[i] is invalid
            else if (p2s[p[i]] != s_list[i]) {
                // Return false if mapping is invalid
                return false;
            }
        }

        // Return true if the function has not yet returned false
        return true;
    }
};
