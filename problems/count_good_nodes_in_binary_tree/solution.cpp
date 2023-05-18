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
    int dfs(TreeNode* root, int maxi)
    {
        int goodNode = 0;

        if(!root) return goodNode;

        if(root->val >= maxi)
        {
            goodNode++;
            maxi = root->val;
        }

        return goodNode+ dfs(root->left, maxi) + dfs(root->right, maxi);
    }
    int goodNodes(TreeNode* root) {
        
        return dfs(root, INT_MIN);
        
    }
};

