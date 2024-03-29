/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
       
        vector<int> result;
        if(root == NULL) return result;
        
        stack<Node*> st;
        st.push(root);
        
        while(!st.empty()) {
            
            Node* node = st.top();
            result.push_back(node -> val);
            st.pop();
            
            for(Node* children: node -> children) {
                st.push(children);
            }
        }
        
        reverse(result.begin(), result.end());
        return result;

        
    }
};