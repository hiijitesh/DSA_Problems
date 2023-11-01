class Solution {
public:
    int val = INT_MIN, freq = 0, maxFreq = 0;
    vector<int> ans;

    void inOrder(TreeNode* Node) {
        if (Node == NULL) return;
        inOrder(Node->left);
        if (val==Node->val) 
            freq++;
        else {
            val=Node->val;// update val
            freq=1;
        }
        if (freq>maxFreq) {
            maxFreq=freq;
            ans={Node->val};
        } 
        else if (freq==maxFreq) 
            ans.push_back(Node->val);
        
        inOrder(Node->right);
       
    }

    vector<int> findMode(TreeNode* root) {
        inOrder(root);
        return ans;
    }
};
