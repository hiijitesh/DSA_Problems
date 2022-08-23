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
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL)
            return false;
        if(head->next == NULL)
            return true;
        
        ListNode* midNode = findMid(head);
        ListNode* secondLL = midNode->next;
        midNode->next = NULL;
        
        ListNode* l2 = reverse(secondLL);
        return compare(head, l2);   
        
    }
     //mid node
    ListNode* findMid(ListNode* head){
        
        ListNode* fast = head;
        ListNode *slow = head;
        
        while(fast->next != NULL and fast->next->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
     // reverse
    ListNode* reverse(ListNode* head){
        
        ListNode* curr = head;
        ListNode* prev = NULL, *nextNode = NULL;
        
        while(curr != NULL)
        {
            nextNode = curr->next;
            curr->next =prev;
            prev = curr;
            curr = nextNode;
        }
        
        return prev;
    }
    
    
    //compare
    bool compare(ListNode* l1, ListNode* l2){
        
        while(l1 != NULL and l2 != NULL){
            
            if(l1->val != l2->val)
                return false;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        return true;
    }
    
   
   
};