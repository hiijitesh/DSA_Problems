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
    
    bool solve( TreeNode* root , int targetSum, int currsum){
        
        if( root==NULL) return false;
        
        if( root->left == NULL && root->right == NULL ) return currsum+root->val ==targetSum;
        
        return solve( root->left, targetSum, currsum+root->val) || solve( root->right, targetSum, currsum+root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return solve( root,targetSum,0);
        
        
        
    }
};