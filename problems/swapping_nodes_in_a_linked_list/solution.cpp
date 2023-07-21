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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *fast = head, *slow = head;
        ListNode *first = head, *last = head;

        //first get kth node;
        for(int i = 0; i < k-1; ++i)
            fast = fast->next;

        first = fast;

        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        last = slow;

        //swap
        int temp = first->val;
        first->val = last->val;
        last->val = temp;

        return head;

    }
};