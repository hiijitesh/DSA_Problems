Use
`auto currNode,
auto tempNode`
​
**Traverse the Linked List for finding the length**
```
ListNode *temp = head;
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
temp=temp->next;
return temp;
}
```
​
​
​
​
​
​
​
​
​
​
​
​
​