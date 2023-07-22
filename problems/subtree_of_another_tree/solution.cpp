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
    bool isSametree(TreeNode* s, TreeNode* t){
        if(!s or !t)
            return s==NULL and t == NULL;
        if(s->val == t->val)
            return isSametree(s->left, t->left) and isSametree(s->right, t->right);
        else
            return false;
    }
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s == NULL)
            return false;

        if(isSametree(s,t))
            return true;

        else 
            return isSubtree(s->left, t) or isSubtree(s->right, t);
    }
};