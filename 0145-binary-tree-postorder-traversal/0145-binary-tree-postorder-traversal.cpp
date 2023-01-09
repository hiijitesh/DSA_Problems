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
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        stack<TreeNode*> st;
        
        if(root== nullptr)
            return ans;
        
        st.push(root);
        
        while(st.size() > 0)
        {
            TreeNode* currNode = st.top();
            ans.push_back(currNode->val);
            
            st.pop();
            
            if(currNode->left != NULL)
                st.push(currNode->left);
            
            if(currNode->right != NULL)
                st.push(currNode->right);
            
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};