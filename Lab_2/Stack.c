/* Functions for adding and retriveing elements from the top of stack */
#include "linkedlist.h"
#include "Stack.h"

void PUSH(struct linkedlist * head, int ele){
head->count++;
struct node *n;
n = (struct node*)
        malloc(sizeof(struct node));

n->element = ele;
n->next= head->first ;
head->first = n;
}

int POP(struct linkedlist * head){
int n;
n = head->first->element;
head->first = head->first->next;
return n;
}
