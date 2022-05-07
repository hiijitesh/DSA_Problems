**Use This following things**
```
//To declare a node us *auto* key insteads of *ListNode*
​
ListNode* currNode = head;
ListNode* slow = head, *fast = head;
​
// Instead of using NULL we can use nullptr
​
head = nullptr;
while(currNode->next != nullptr)
​
// we can avoid NULL or nullptr in while loop
auto currNode = head
while(currNode){
currNode = currNode->next;
}
```
​
**Traverse the Linked List for finding the length**
```
ListNode* temp = head;
int length=0;
//Traversing temp till the end of linked list to find length #O(n)
while(temp){
length++;
temp = temp->next;
}
```
​
**To Reach at certain position using the length of LL**
```
int middle = length/2;
temp=head;
//traversing temp node back to middle node #O(n/2)
while(temp && middle--)