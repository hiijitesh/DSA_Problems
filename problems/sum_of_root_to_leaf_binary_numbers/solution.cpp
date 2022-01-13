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
// int sumRootToLeaffun(TreeNode* root, int sum){
//         if(root==NULL) 
//             return 0;
//         sum = (2 * sum) + root->val;
    
//         if(root->left==NULL && root->right==NULL) 
//             return sum;
//         return sumRootToLeaffun(root->left, sum) + sumRootToLeaffun(root->right, sum);
//     }

//     int sumRootToLeaf(TreeNode* root) {
//         return sumRootToLeaffun(root, 0);
//     }

class Solution {
public:
    
    int totalsum( TreeNode* root, int ans){
        
        if(root==NULL) return 0;
        
       ans= (2*ans)+ root->val;
        
        if( root->left == NULL && root->right == NULL) return ans ;
        
        return totalsum(root->left,ans) + totalsum(root->right,ans);                       
        
    }
    int sumRootToLeaf(TreeNode* root) {
        
        
        return totalsum( root,0);
        
        
        
    }
};