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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummyNode = new ListNode(-1);
        ListNode* head = dummyNode;
        
        if(!l1) return l2;
        if(!l2 ) return l1;
        
        int carry = 0;
        int total = 0, firstNum = 0, secondNum = 0;
        
        while(l1  or l2)
        {
           
            if(l1){
               
                firstNum = l1->val;
            }
            else
                firstNum = 0;
            
            if(l2){
                
                 secondNum = l2->val;
            }
            else
                secondNum = 0;
           
            
            total = firstNum + secondNum + carry;
            
            carry = total/10;
            total %= 10;  
            
            //CREATING THE NEW NODE     
            ListNode* newNode = new ListNode(total);
            
            //create dummNode and point it to newly created node
            
            dummyNode->next = newNode;
            //now moving to the next node in both LL
            dummyNode = dummyNode->next;
            if(l1){
                l1 = l1->next;
            }
            if(l2){
                
                l2 = l2->next;
            }    
        }

        if(carry == 1){
            
            ListNode* newNode = new ListNode(1);
            dummyNode->next = newNode;
            
        }
        
        return head->next;
        
    }
};