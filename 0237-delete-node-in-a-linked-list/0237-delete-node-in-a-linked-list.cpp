/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        //swaping the target node value with previous node value
        int temp = node->val;
        node->val = node->next->val;
        node->next->val = temp;
        
        // delete the target node by linking prev node of target node with  nextNode of target node
        
        node->next = node->next->next;
        return;
        
    }
};