class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        int length=0;
				//Traversing temp till the end of linked list to find length #O(n)
        while(temp){
            length++;
            temp = temp->next;
        }
        int middle = length/2;
        temp=head;
       //traversing temp node back to middle node #O(n/2)
        while(temp && middle--)
            temp=temp->next;
        
        return temp;
    }
};