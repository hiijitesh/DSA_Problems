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
    bool isPalindrome(ListNode* head) {
        
        vector<int> ans;
        
        ListNode* currNode = head;
        while(currNode != NULL){

            ans.push_back(currNode->val);
            currNode = currNode->next;
        }
        
        for(int i = 0; i < ans.size()/2; i++)
        {
            if(ans[i] != ans[ans.size()-1-i])
                return false;
        }
        return true;
    }
};