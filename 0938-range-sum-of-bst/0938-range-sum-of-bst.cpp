/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public :
         int sum=0;
    int inorder(TreeNode* root,int L,int R)
    {
        if(root){
        inorder(root->left,L,R);
        if(root->val>=L && root->val<=R)
            sum+=root->val;
        inorder(root->right,L,R);
        }
        return sum;
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(!root)return 0;
        return inorder(root,L,R);
    }
};