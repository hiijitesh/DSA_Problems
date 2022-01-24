/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>nodes;
        
        if(root ==NULL) return nodes;
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            int currentSize = q.size();
            vector<int>levelNodes;
            while(currentSize > 0){
                Node* currentNode = q.front();
                q.pop();
                
                //Add to levelNode
                levelNodes.push_back(currentNode->val);
                for (Node* child : currentNode->children){
                    
                    q.push(child);
                }
                
                currentSize--;
            }
            nodes.push_back(levelNodes);
        }
        
        return nodes;
        
    }
};


























