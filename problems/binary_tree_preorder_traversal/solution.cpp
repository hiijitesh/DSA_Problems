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
    
   //This code is Interative version of PreOrder Traversal 
    public:
         vector<int> preorderTraversal(TreeNode* root){
             
             vector<int> preorder;
             
             if(root==NULL) return preorder;
             
             stack<TreeNode*> st;
             st.push(root);
             
             while(!st.empty()){
                 
                 root= st.top();
                 st.pop();
                 
                 preorder.push_back(root->val);
                 
                 if(root->right!=NULL) st.push(root->right);
                 
                 if(root->left!=NULL) st.push(root->left);
                 
             }
             return preorder;
         }
    
    
    
//     private:
    
//     void dfs(TreeNode *node, vector<int> &preorder) {
//         if(node == NULL) return; 
        
//         preorder.push_back(node->val); 
//         dfs(node->left, preorder); 
//         dfs(node->right, preorder); 
//     }
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> preorder;
//         dfs(root, preorder);
//         return preorder; 
//     }
   
};