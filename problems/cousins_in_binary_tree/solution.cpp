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
//     void findNodes(TreeNode* root, int x, int y,int level[2],int parents[2],int currlevel,TreeNode* currparent)
//     {
//         if(root==NULL)return;
//         if(root->val == x)
//         {
//             level[0]=currlevel;
//             parents[0]=currparent->val;
//         }
//         if(root->val == y)
//         {
//             level[1]=currlevel;
//             parents[1]=currparent->val;
//         }
//         findNodes(root->left,x,y,level,parents,currlevel+1,root);
//         findNodes(root->right,x,y,level,parents,currlevel+1,root);
//     }
//     bool isCousins(TreeNode* root, int x, int y) {
//         int level [2] = {-1,-1};
//         int parents[2] = {-1,-1};
//         findNodes(root,x,y,level,parents,0,new TreeNode(-1)); 
//         if(level[0]==level[1] && parents[0]!=parents[1])
//             return true;
//         return false;
//     }
// };

class Solution {
public:
    
    void solve(TreeNode*root, int x, int y,vector<int> &levels, vector<TreeNode*> &parents ,int currlevel, TreeNode* currparent){
        
        if(root==NULL) return;
        
        if(root->val == x)
        {
            levels[0]=currlevel;
            parents[0]=currparent;
        }
        if(root->val == y)
        {
            levels[1]=currlevel;
            parents[1]=currparent;
        }
    
        solve(root->left,x,y,levels,parents,currlevel+1,root);
        solve(root->right,x,y,levels,parents,currlevel+1,root);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        
        vector<int> levels = { -1 ,-1};
        vector<TreeNode*> parents = {NULL,NULL};
        
        solve(root,x,y,levels,parents,0,NULL);
        
        if(levels[0]==levels[1] && parents[0] != parents[1]) return true;
        
        return false;
        
    }
};