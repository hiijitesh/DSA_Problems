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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* dummy = new ListNode(-100);
        ListNode* head  = dummy;
        
        if(list1 == NULL) 
            return list2;
        
        if(list2 == NULL)
            return list1;
        
        while(list1 != NULL && list2 != NULL)
        {
            
            if(list1 -> val < list2 -> val)
            {
                ListNode* tempNode = new ListNode(list1->val);
                dummy->next = tempNode;
                
                list1 = list1->next;
            }
            else
            {
                ListNode* tempNode = new ListNode(list2->val);
                dummy->next = tempNode;
                list2 = list2->next;
            }
            dummy = dummy->next;
        }
        
        //when list1 is empyt
        
        if(list2 != NULL)
            dummy->next = list2;
        if(list1 != NULL)
            dummy->next = list1;
        
        return head->next;
    }
};