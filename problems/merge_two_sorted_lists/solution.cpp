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
        
        //corner case
        
        if (list1 == nullptr) return list2;
        
        if(list2 == nullptr) return list1;
        
        //create dummyNode
        
        ListNode* dummyNode = new ListNode(-100);
        
        ListNode* head = dummyNode;
        
        
        //traverse over the both LL
        
        while(list1!= nullptr and list2 != nullptr)
        {
            if(list1->val < list2->val){
                
                ListNode* newNode = new ListNode(list1->val);
                dummyNode->next = newNode;
               
                //move list 1
               list1 = list1->next;
                
            }
                
               
            
            else{
                
                ListNode* newNode = new ListNode(list2->val);
                dummyNode->next = newNode;
               
                //move list 1
               list2 = list2->next;
                
            }
              
            dummyNode = dummyNode->next;
            
        }
        
        //when list1 is empty
        
        if(list2 != nullptr){
            dummyNode->next = list2;
        }
        
         if(list1 != nullptr){
            dummyNode->next = list1;
        }
        
        return head->next;
        
        
    }
};