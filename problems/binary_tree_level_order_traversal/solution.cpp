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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
     
        vector<vector<int>>ans;
        
        if(!root) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int currSize = q.size();
            vector<int> res;
            
            while(currSize > 0)
            {
                TreeNode* currNode = q.front();
                q.pop();
                
                res.push_back(currNode->val);
                
                if(currNode->left) q.push(currNode->left);
                if(currNode->right) q.push(currNode->right);
                
                currSize--;
            }
            ans.push_back(res);
            
        }
        return ans;
        
    }
};