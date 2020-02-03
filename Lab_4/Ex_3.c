#include<stdio.h>
#include<stdlib.h>
//#include "memory_ops.h"
//#include "linkedlist_ops.h"
#include "cycle.h"

int main(int num, char *args[]){

FILE * fptr = fopen(args[1], "w");
if(fptr == NULL){
  printf("Can't open file\n");
  exit(0);
}
Ls list = createList(10);
int mem = return_mem();
fprintf(fptr, "%d ", mem);
list = createCycle(list);
bool b = testCyclic(list);
printf(b?"True":"False");
printf("\n");
printFirst100(list);
fclose(fptr);
}
