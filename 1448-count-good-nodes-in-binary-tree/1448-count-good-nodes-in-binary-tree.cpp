class Solution
{
    int ans = 0;
    void pre(TreeNode *root, int max)
    {
        if (!root) return;
        if (root->val >= max)
        {
            ans++;
            max = root->val;
        }
        pre(root->left, max);
        pre(root->right, max);
    }
    public:
        int goodNodes(TreeNode *root)
        {
            pre(root, INT_MIN);
            return ans;
        }
};