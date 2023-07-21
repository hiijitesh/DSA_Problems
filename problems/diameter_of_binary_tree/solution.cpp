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
    int diameter = 0;
public:
    int maxeDepth(TreeNode* root){
        if(root == NULL)
            return 0;

        //get left hight and right height
        int leftHeight = maxeDepth(root->left);
        int rightHeight = maxeDepth(root->right);

        diameter = max(diameter, leftHeight +rightHeight);
        return 1+max(leftHeight, rightHeight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxeDepth(root);
        return diameter;
    }
};