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
    bool hasCycle(ListNode *head) {
        
        if(head == nullptr or head->next == nullptr){
            return false;
            
        }
        
        ListNode *slow = head, *fast = head;
        
        while(fast->next != nullptr and fast->next->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow) 
                return true;
        }
        
        return false;
    }
};