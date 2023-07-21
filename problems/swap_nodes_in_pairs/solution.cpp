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
    ListNode* swapNodePair(ListNode* head){
          
        if(head == NULL)
            return NULL;
        ListNode* currNode = head;
        int currLen = 1;

        while(currNode->next != NULL && currLen < 2){
            currNode = currNode->next;
            currLen++;
        }
        if(currLen < 2)
            return head;
        ListNode* tempNode = currNode->next;
        currNode->next = NULL;

        ListNode* tempList = swapNodePair(tempNode);
        ListNode* reversedList = reverseLL(head);
        head->next = tempList;
        return reversedList;
    }
    ListNode* swapPairs(ListNode* head) {
      return swapNodePair(head);
    }
};