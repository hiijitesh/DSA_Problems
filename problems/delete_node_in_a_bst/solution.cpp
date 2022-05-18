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
    TreeNode* leftMostNode(TreeNode *curr){
        
        while(curr->left != NULL){
            curr = curr->left;
        }
        
        return curr;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root == NULL) return NULL;
        
        if(root->val > key){
            root->left = deleteNode(root->left, key);
            return root;
        }
        else if(root->val < key){
            root->right = deleteNode(root->right, key);
            return root;
 
        }
        else if( root->val == key)
        {
          //wether its leaf node or not
            if(root->left == NULL and root->right == NULL ){
                root = NULL;
                return root;
            }
            
            // if there is one leaf node in left
            if(root->left != NULL && root->right == NULL){
                root = root->left;
                return root;
                    
            }
            // if there is one leaf node in the right
            if(root->right != NULL && root->left == NULL){
                root = root->right ;
                return root;
            }
            
            
            // at this point our target node in not a leaf node so for tha
            // we will 
            TreeNode* tempNode = leftMostNode(root->right);
            
            int tempRoot = root->val;
            root->val = tempNode->val;
            tempNode->val = root->val;
            
            root->right = deleteNode(root->right, tempNode->val);
            return root;
        }
        return root;
        
    }
};