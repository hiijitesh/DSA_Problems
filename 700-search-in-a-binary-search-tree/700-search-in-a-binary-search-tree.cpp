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
    TreeNode* searchBST(TreeNode* root, int val) {
        
        
        TreeNode* current = root;
        
        while( current != nullptr)
        {
            if(current->val == val) return current;
            
            if(current->val > val) current = current->left;
            
            else
                 current = current->right;
            
        }
        
        return nullptr;
    }
};