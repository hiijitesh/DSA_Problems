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
    ListNode* reverse(ListNode* head)
    {
        if(head == NULL) return head;
        
        ListNode* currNode = head;
        ListNode* prevNode = nullptr;
        ListNode* nextNode = nullptr;
        
        while(currNode != nullptr)
        {
            nextNode = currNode->next;
            currNode->next = prevNode;
            
            prevNode = currNode;
            currNode = nextNode;
            
        }
        
        return head = prevNode;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL or head ->next == NULL) return NULL;
        
        ListNode *dummy = new ListNode(-1);
        dummy->next = reverse(head);
        
        head = dummy;
        
        ListNode *curr = head, *prev = NULL;
        
        for(int i = 0; i < n; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        
        //delete that node
        prev->next = curr->next;
        
        return reverse(head->next);
    }
};