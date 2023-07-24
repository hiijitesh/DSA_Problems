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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> level;
        if(!root)
            return level;   

        queue<TreeNode*> q;
        q.push(root);

        while(q.size()>0){

            int currSize = q.size();
            vector<int>lvl;
            while(currSize--){
                TreeNode* currNode = q.front();
                lvl.push_back(currNode->val);
                q.pop();

                if(currNode->left) 
                    q.push(currNode->left);
                if(currNode->right)
                    q.push(currNode->right);
            }
            level.push_back(lvl);
        }
        return level;
    }
};