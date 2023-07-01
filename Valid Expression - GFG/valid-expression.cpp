//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool valid(string s)
{
    // code here
    stack<char> st;

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '('
                    or s[i] == '{'
                    or s[i] == '[')
                    st.push(s[i]);

                else
                {
                    if (st.empty()) return false;

                    char c = st.top();
                    st.pop();

                    if ((s[i] == ')'
                            and c == '(') or(s[i] == '}'
                            and c == '{') or(s[i] == ']'
                            and c == '['))
                    {
                        continue;
                    }
                    else
                        return false;
                }
            }

            return st.empty();
}