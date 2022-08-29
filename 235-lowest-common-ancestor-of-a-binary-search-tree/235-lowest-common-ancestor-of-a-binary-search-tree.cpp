/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        TreeNode*  currNode = root;
        
        while( currNode != NULL){
            
            if( currNode ->val > p->val && currNode->val > q->val){
                currNode = currNode->left;
            }
            else if( currNode->val < p->val && currNode->val < q->val){
                
                currNode = currNode->right;
            }
            
            else
                return currNode;
        }
        return NULL;
        
    }
};