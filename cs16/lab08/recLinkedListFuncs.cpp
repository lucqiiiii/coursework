#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
  if(head == NULL)
    return 0;
  else
    return (head -> data) + recursiveSum(head -> next);
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
/*  int current = head -> data;
  int next;
  if(head == NULL)
    return 0;
  else
    next =  recursiveLargestValue(head -> next);

  if(current > next)
    return current;
  else
    return next;*/
  if(head -> next == NULL)
    return head -> data;
  else if(head -> data > recursiveLargestValue(head -> next))
    return head -> data;
  else 
    return recursiveLargestValue(head -> next);
}
