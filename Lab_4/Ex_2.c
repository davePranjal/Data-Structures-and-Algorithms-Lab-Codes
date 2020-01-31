#include<stdio.h>
#include<stdlib.h>
#include "memory_ops.h"

int mem = 0;

int main(){
int lower = 10000;
int upper = 25000;
int* ptr;
int length = 20;
printf("%d \n", mem);
ptr = myalloc(length);
mem = return_mem();

printf("%d \n", mem);
myfree(ptr, length );
mem = return_mem();
printf("%d \n", mem);


int n;
/*
 for(n = 0; n< 10e6; n++)
{
	length = (rand()%(upper - lower + 1)) + lower;
	printf("%d \n", length);
	ptr = myalloc(length);
	if (ptr == NULL)
		break;
	printf("%u \n" , ptr);
	//printf("%u \n" , ptr[length-1]);
	printf("%d \n", total_mem);
	//myfree(ptr, length); 
} 

*/
 
}
 



