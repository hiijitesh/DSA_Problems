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
    bool isSame( TreeNode* root, int val){
        
         if( root == NULL ) return true;
        
         if( val != root->val) return false;
        
         bool la= isSame( root->left,val);
        
         bool ra= isSame( root->right,val);
        
         return la && ra;
        
    }
    
    bool isUnivalTree(TreeNode* root) {
        
        return isSame( root, root->val);
        
       
        
    }
};