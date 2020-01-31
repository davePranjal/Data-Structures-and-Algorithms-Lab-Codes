#include<stdio.h>
#include<stdlib.h>
//#include "memory_ops.h"
#include "linkedlist_ops.h"

int main(int num, char *args[]){

FILE * fptr = fopen(args[1], "w");
if(fptr == NULL){
  printf("Can't open file\n");
  exit(0);
}
Ls list = createList(10e7);
int mem = return_mem();
fprintf(fptr, "%d ", mem);
list = creteCycle(list);
printFirst100(list);
fclose(fptr);

}
