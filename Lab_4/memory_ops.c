//#include "linkedlist_ops.h"
#include "memory_ops.h"

int total_mem = 0;
int return_mem();
NODE * myalloc(int length){
total_mem = total_mem  + sizeof(NODE)*length;
NODE *ptr = (NODE *) malloc(sizeof(NODE)*length) ;
return ptr;
}

void myfree(NODE *ptr, int length){
total_mem = total_mem - sizeof(NODE)*length;
free(ptr);
}

int return_mem(){
return total_mem;
}
