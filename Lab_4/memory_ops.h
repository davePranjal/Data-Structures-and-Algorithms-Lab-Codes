#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <time.h>

struct node{

int ele;
struct node * next;

};

struct linked_list{
int size;
struct node * head;
};

typedef struct node NODE;
typedef struct linked_list Ls;

int return_mem();
NODE * myalloc(int length);
void myfree(NODE *ptr, int length);
