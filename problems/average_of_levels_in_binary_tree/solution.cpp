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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int currSize = q.size();
            
            long sum = 0;
            
            for(int i = 0; i < currSize; i++){
                
                TreeNode* currNode = q.front();
                q.pop();
                
                if(currNode -> left) q.push(currNode -> left);
                if(currNode -> right) q.push(currNode -> right);
                
                sum += currNode -> val;
                
            }
            
            ans.push_back((double)sum/currSize);
        }
        return ans;
    }
};