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
    ListNode* reverseLL(ListNode* head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        while (curr!=NULL)
        {
            ListNode * newNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = newNode;
        }
        return prev;
    }
    ListNode* reverseLLinKGroup(ListNode* head, int k)
    {
        ListNode* currNode = head;
        int currlen = 1;
        if(head == NULL) return head;
        while(currNode->next!=NULL and currlen<k)
        {
            currNode=currNode->next;
            currlen+=1;
        }
        if(currlen<k)
            return head;
        
        ListNode *tempnode = currNode->next;
        currNode->next = NULL;
    
        ListNode * templist = reverseLLinKGroup(tempnode,k);
        ListNode * previous = reverseLL(head);
        head->next = templist;
        return previous;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        return reverseLLinKGroup(head,k);
    }
};