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
    bool checkBST( TreeNode* root , vector<long long> &prev){
        
        if(root== NULL) return true;
        
        bool leftSide= checkBST( root->left, prev);
        
        if(root->val <= prev[0]) return false;
        
        prev[0]=root->val;
        
        bool rightSide = checkBST( root->right, prev);
        
        return leftSide && rightSide;
        
    }
    bool isValidBST(TreeNode* root) {
        
        vector<long long> vec (1,-99999999999999L);
        
        return checkBST(root, vec);
        
    }
};