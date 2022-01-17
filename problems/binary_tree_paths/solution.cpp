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
    void rootToLeaf( TreeNode* root, string osf, vector<string> &ans){
        
        if( root==NULL) return;
        
        if( root->left == NULL && root->right == NULL) {
            
            osf += to_string(root->val);
            ans.push_back(osf);
            return;
        }
        
        osf+=to_string(root->val)+"->";
        
        rootToLeaf( root->left, osf, ans);
        rootToLeaf(root->right, osf, ans);
        
        return;
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> ans;
        
        rootToLeaf( root, "", ans);
        
        return ans;
        
    }
};