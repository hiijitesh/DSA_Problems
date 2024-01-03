/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL)
            return NULL;
        
        if(head->next == NULL)
            return head;
        
        ListNode* currNode = head;
        ListNode* reveredNode = reverseList(currNode->next);
        currNode->next->next = currNode;
        currNode->next = NULL;
        return reveredNode;
    }
};