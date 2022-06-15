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
        
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        
        int carry = 0;
        int total = 0, firstNum = 0, secondNum = 0;
        
        while(l1 != nullptr and l2 != nullptr)
        {
            firstNum = l1->val;
            secondNum = l2->val;
            
            total = firstNum + secondNum + carry;
            
            carry = total/10;
            total %= 10;  
            
            //CREATING THE NEW NODE     
            ListNode* newNode = new ListNode(total);
            
            //create dummNode and point it to newly created node
            
            dummyNode->next = newNode;
            //now moving to the next node in both LL
            dummyNode = dummyNode->next;
            l1 = l1->next;
            l2 = l2->next;
            
        }
        //it might be happen that one of the LL is got finish firsta and
        //second one got left
        
        while(l2 != nullptr){
            
            total = l2->val + carry;
            
            carry  = total / 10;
            total %= 10;
            
            ListNode* newNode = new ListNode(total);
            
            // dummyNode = newNode;
            dummyNode->next = newNode;
            
            //move 
            dummyNode = dummyNode ->next;
            l2 = l2->next;
        }
        
        //if l1 is empty
        
         while(l1 != nullptr){
            
            total = l1->val + carry;
            
            carry  = total / 10;
            total %= 10;
            
            ListNode* newNode = new ListNode(total);
            
            // auto dummyNode = new Node(-1);
            dummyNode->next = newNode;
            
            //move 
            dummyNode = dummyNode ->next;
            l1 = l1->next;
        }
        
        if(carry == 1){
            
            ListNode* newNode = new ListNode(1);
            dummyNode->next = newNode;
            
        }
        
        return head->next;
        
    }
};