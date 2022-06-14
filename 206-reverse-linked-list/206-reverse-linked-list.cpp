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
        
        ListNode* currNode = head;
        
        if(currNode == nullptr) return nullptr;
        
        if(currNode->next == nullptr){
            
             return currNode;
        }
        
        ListNode* newNode = reverseList(currNode->next);
        currNode->next->next = currNode;
        currNode->next = nullptr;
        
        return newNode;
        
        
    }
};