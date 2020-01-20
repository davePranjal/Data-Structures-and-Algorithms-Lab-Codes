/* Creates a linkedlist and populates it with values from a .txt file given at runtime*/
#include <stdio.h>
#include "linkedlist.h"

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
		insertFirst(head, temp);
	}
	fclose(fptr);
}
