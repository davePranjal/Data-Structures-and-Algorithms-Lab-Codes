#include<stdio.h>
#include<stdlib.h>
//#include "memory_ops.h"
//#include "linkedlist_ops.h"
#include "cycle.h"
#include <sys/time.h>

int main(int num, char *args[]){
struct timeval t1, t2;
double elapsedTime;
FILE * fptr = fopen(args[1], "w");
  bool b;
  Ls list;
  int mem;
if(fptr == NULL){
  printf("Can't open file\n");
  exit(0);
}
int length = 10e3;
for(length = 10e3; length <= 10e7; length*=10){
  gettimeofday(&t1, NULL);
  list = createList(length);
  mem = return_mem();
  list = createCycle(list);
  b = testCyclic(list);
  //printf("\n");
  gettimeofday(&t2, NULL);
  elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;
  fprintf(fptr, "%d   %d  %f",length, mem, elapsedTime);
  fprintf(fptr, b?" True":" False");
  fprintf(fptr, "\n");
}
//printFirst100(list);
fclose(fptr);
}
