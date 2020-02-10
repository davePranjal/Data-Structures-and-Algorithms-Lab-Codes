//#include "memory_ops.h"
//#include "linkedlist_ops.h"
#include "cycle.h"

Ls createList(int N){
//if (N < 10e6)
	//return X;
	int i;
	Ls list;
	list.size = N;
	list.head = NULL;
	srand(time(NULL));
	for(i=0; i<N; i++)
		list = createNode(rand(), list);
	return list;
}

Ls createNode(int ele, Ls l){
	NODE * nptr = myalloc(1);
	nptr->next = l.head;
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
	if(nptr == NULL)
	break;
}
}
Ls createCycle(Ls list){
srand(time(NULL));
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
Ls makeCircularList(Ls list){
	 bool b = testCyclic(list);
	 if(!b){
		 NODE *q = list.head;
		 while(q->next != NULL)
		 		q = q->next;
			q->next = list.head;
	 }
	 if(b){
		 NODE * hare = list.head;
		 NODE * tort = list.head;
		 NODE * prev = list.head;
		 hare = hare->next->next;
		 tort = tort->next;
		 while(1)
		 if(hare == tort  && hare!= NULL && tort != NULL)
			 break;
		 tort = list.head;
		 while(hare != tort)
		 {
			hare = hare->next;
			tort = tort->next;
			myfree(prev, 1);
			prev = tort;
		 }
		 list.head = hare;
	 }
	 return list;
}
bool testCircular(Ls list){
	int count = 0;
	NODE *one = list.head->next;
	bool b = false;
	if(!testCyclic(list))
	return false;
	while(1){
		if(one == list.head){
			b = true;
			break;
		}
		if(count > list.size)
			break;
		count++;
		one  = one->next;
	}
	return b; 
}
