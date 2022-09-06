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
    bool solve(TreeNode* root, int key, int currSum)
    {
        if(root == NULL) return 0;
        
        if(root->left == NULL and root->right == NULL)
                return currSum + root->val == key;
        bool leftTree = solve(root->left, key, currSum+root->val);
        bool rightTree = solve(root->right, key, currSum+root->val);
        
        return leftTree or rightTree;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return solve(root,targetSum, 0);
        
    }
};