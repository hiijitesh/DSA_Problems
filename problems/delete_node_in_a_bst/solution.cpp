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
private:
    TreeNode* findLeftMost(TreeNode* currNode){
        
        while(currNode->left != NULL){
            currNode=currNode->left;
        }
        return currNode;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        
         if( root == NULL) return NULL;  
        
         if( key< root->val){
            root->left =deleteNode( root->left, key);
            return root;
        }
        
        else if( key > root->val){
            
            root->right= deleteNode(root->right, key);
            return root;
        }
        else{
            
            if( root->left == NULL && root->right == NULL){
                 root = NULL;
                return root;
                
            }
               
                
            if( root->left != NULL && root->right ==NULL){
                 root= root->left;
               return root;
                
            }
               
            if( root->right != NULL && root->left == NULL){
                 root= root->right;
                return root;
            }
               
            // TreeNode *rightNode = root->right;
            //goto the most left side of a right side of key
            TreeNode  * tempNode= findLeftMost(root->right);
            
            //swap the node
            int temproot= root->val;
            root->val =tempNode->val;
            tempNode->val=temproot;
            
            //calling the function to delete right subtree
            root->right = deleteNode(root->right, tempNode->val);
            return root;
        }  
        return root;   
    }
};