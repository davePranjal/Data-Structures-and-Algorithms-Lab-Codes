/* Functions for creating, modifying and searching a linkedlist specified by a pointer to its headnode*/
#include "linkedlist.h"

void insertFirst (struct linkedlist * head, int ele){
head->count++;
struct node *n;
n = (struct node*)
        malloc(sizeof(struct node));

n->element = ele;
n->next= head->first ;
head->first = n;
}
struct node * deleteFirst(struct linkedlist * head){
struct node *n;
n = head->first;
head->first = head->first->next;
return n;
}
void printList (struct linkedlist * head){
struct node *n = head->first;
int size  = head->count;
int i;
for(n = head->first; n != NULL ; n = n->next){
printf("%d \n" , n->element);
}
}


int search (struct linkedlist * head, int ele){
int flag = 0;
struct node *n;
for(n = head->first; n != NULL ; n = n->next)
	if(n->element == ele)
		flag = 1;
return flag ;
}

struct node * delete(struct linkedlist * head, int ele){
struct node *n;
struct node *temp;
for(n = head->first; n  != NULL ; n = n->next)
	if(n->element == ele){
			temp = n;
			n = n->next;
			return temp;
			}
	else {
		printf("Element not found");
		return NULL;
	}
}
