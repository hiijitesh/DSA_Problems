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
// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
        
//         vector<vector<int>> ans;
        
//         queue<TreeNode*> q;
        
//         if( root != NULL) return ans;
        
//         q.push(root);
        
//         while(!q.empty()){
            
//             int currSize = q.size();
            
//             vector<int> level;
            
//             while(currSize >0){
                
//                 TreeNode* currNode= q.front();
//                 q.pop();
                
//                 level.push_back(currNode->val);
                
//                 if(currNode->left != NULL)
//                      q.push(currNode->left);
                
//                 if(currNode->right != NULL)
//                     q.push(currNode->right);
                
//                 currSize--;
//             }
            
//             ans.push_back(level);
//         }
        
//         return ans;
        
//     }
// };

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>nodes;
        
        if(root ==NULL) return nodes;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int currentSize = q.size();
            vector<int>levelNodes;
            while(currentSize > 0){
                TreeNode* currentNode = q.front();
                q.pop();
                
                //Add to levelNode
                levelNodes.push_back(currentNode->val);
                
                if(currentNode->left != NULL)
                    q.push(currentNode->left);
                if(currentNode->right != NULL)
                    q.push(currentNode->right);
                
                currentSize--;
            }
            nodes.push_back(levelNodes);
        }
        
        return nodes;
    }
};
