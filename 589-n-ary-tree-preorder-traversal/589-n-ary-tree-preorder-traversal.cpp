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
    vector<int> preorder(Node* root) {
        
       
        vector<int> ans;
        
        if(root == NULL) return ans;
        
        stack<Node*> st;
        st.push(root);
        
        while(!st.empty()) {
            
            Node* node = st.top();
            ans.push_back(node -> val);
            st.pop();
            
            for(int i = (node -> children).size() - 1; i >= 0; i--) {
                if(node -> children[i] != NULL) {
                    st.push(node -> children[i]);
                }
            }
        }       
        return ans;    
    }
};