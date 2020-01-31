//#include "memory_ops.h"
#include "linkedlist_ops.h"

Ls createList(int N){
if (N < 10e6)
	return X;
int i,num;
Ls list;
list.size = N;
list.head = NULL;
for(i=0; i<N; i++){

	num = rand();
	list = createNode(num, list);
}
return list;
}

Ls createNode(int ele, Ls l){
	NODE * nptr = myalloc(1);
	if(l.head != NULL)
		nptr->next = l.head->next;
	l.head = nptr;
	nptr->ele = ele;
return l;
}

void printFirst100(Ls list){
int i,ele;
NODE * nptr = list.head;
for(i=0;i<100;i++){
	ele = nptr->ele;
	printf("%d \n" , ele);
	nptr = nptr->next;
}
}
Ls creteCycle(Ls list){
if(rand()%2 == 1){
	return list;
}
int link_no = (rand()%(list.size + 1)), count= 0;
NODE *p = list.head;
NODE *q = list.head;
while(q->next != NULL)
		q = q->next;
while(count != link_no){
		p =p->next;
		count++;
	}
q->next = p;
return list;
}
