class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char> st;

        for(auto c:s)
            if(isalpha(c))
                st.push(c);
        
        for(auto &c:s)
            if(isalpha(c))
            {
                c = st.top();
                st.pop();
            }
        return s;
    }
};