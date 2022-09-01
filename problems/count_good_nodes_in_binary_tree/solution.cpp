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
    
    int dfs(TreeNode *root, int maxm){
        
        int goodNode = 0;
        
        if(root == NULL) return goodNode;
        
        if(root->val >= maxm){
            maxm = root->val;
            goodNode++;
        }
        
        return goodNode + dfs(root->left, maxm) + dfs(root->right, maxm);
    }
    int goodNodes(TreeNode* root) {
        
        return dfs(root, root->val);
    }
};