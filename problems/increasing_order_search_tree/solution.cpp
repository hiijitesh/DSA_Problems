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
    
private :
    
    void inorder(TreeNode* root, vector<int> &level){
        
        if( root== NULL) return;
        
        inorder(root->left, level);
        
        level.push_back(root->val);
        
        inorder(root->right, level);
    }
public:
    
    TreeNode* increasingBST(TreeNode* root) {
        
        vector<int> level ;
        inorder(root, level);
               
        TreeNode *dummyNode , *newRoot;
        dummyNode = newRoot = new TreeNode(-1);
              
       for(int val :level){
            TreeNode *newNode = new TreeNode(val); 
            dummyNode->right = newNode;
            dummyNode = dummyNode->right;
        }

        return newRoot->right;
    }
};