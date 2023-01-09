/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        stack<TreeNode*> st;
        
        if(root == NULL)
            return ans;
        
        st.push(root);
        
        while(st.size()> 0)
        {
            TreeNode* currNode = st.top();
            
            ans.push_back(currNode->val);
            st.pop();
            
            if(currNode->right != NULL)
                st.push(currNode->right);
            
            if(currNode->left != NULL)
                st.push(currNode->left);
        }
        
        return ans;
    }
};