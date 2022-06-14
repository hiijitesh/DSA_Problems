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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* currNode = head, *prevNode = nullptr, *nextNode = nullptr;
        
        while(currNode != nullptr)
        {
            nextNode = currNode->next;
            
            currNode->next = prevNode;
            
            prevNode = currNode;
            currNode = nextNode;
            
        }
        
        return head = prevNode;
    }
};