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
        int num1 = 0, num2 = 0, carry = 0;

        while(l1 || l2)
        {
            if(l1) num1 = l1->val;
            else num1 = 0;

            if(l2) num2 = l2->val;
            else num2 = 0;

            int newNum = num1+num2+carry;

            carry = newNum/10;
            newNum = newNum%10;

            ListNode* newNode = new ListNode(newNum);
            dummyNode->next = newNode;
            dummyNode = dummyNode->next;

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }

        if(carry == 1){
            ListNode* newNode = new ListNode(carry);
            dummyNode->next = newNode;
        }

        return head->next;
        
    }
};