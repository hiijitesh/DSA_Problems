/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        unordered_map<Node*, Node*> mp;
        Node* dummyNode = new Node(100001);
        Node* curr = head;
        Node* runner = dummyNode;

        while(curr!=NULL){
            Node* newNode = new Node(curr->val);
            runner->next = newNode;
            //store Old Node as key, newer Node as value;
            mp[curr] = newNode;
            curr = curr->next;
            runner = runner->next;
        }

        //now we will connect the random pointer of newly LL
        curr = head;
        runner = dummyNode->next;
        while(curr!=NULL){

            if(curr->random!=NULL){
                runner->random = mp[curr->random];
            }
            runner = runner->next;
            curr = curr->next;
        }
        return dummyNode->next;
    }
};