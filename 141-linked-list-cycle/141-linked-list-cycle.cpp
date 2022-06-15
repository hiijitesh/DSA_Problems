/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head == nullptr or head->next == nullptr) return false;

        unordered_set<ListNode*> s;
        
        ListNode* curr = head;
        
        while(curr != nullptr)
        {
            if(s.find(curr) == s.end())
            {
                s.insert(curr);
                curr = curr->next;
            }
            
            else
                return true;
        }
        
        return false;
        
    }
};