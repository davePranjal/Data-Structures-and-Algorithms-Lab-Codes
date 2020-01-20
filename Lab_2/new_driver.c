/* Implementation of Stack using linkedlist */
#include <stdio.h>
#include "linkedlist.h"
#include "Stack.h"


int main(int num, char *args[]){
	FILE *fptr = fopen(args[1], "r");
	if(fptr == NULL){
		printf("No file to read \n");
		exit(1);
	}
	struct linkedlist *head;

	head = (struct linkedlist *)malloc(sizeof(struct linkedlist));
	head->first = NULL;
	head->count = 0;
	int temp;
	while(!feof(fptr)){
		fscanf(fptr, "%d", &temp);
		PUSH(head, temp);
	}
	fclose(fptr);

	struct node * n;
	for(n = head->first; n!=NULL; n = n->next){
		int i = POP(head);
		printf("%d\n",i );
	}
}
