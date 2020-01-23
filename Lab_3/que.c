#include "que.h"


Queue newQ(){
	Queue q;
	q.Front = NULL;
	q.Rear = NULL;
	return q;
}

bool isEmptyQ(Queue q){
	return (q.Front ==NULL && q.Rear == NULL);
}

Queue delQ(Queue q){
	q.Front = q.Front->next;
	if(q.Front == NULL)
		q.Rear = NULL;
	return q;
}

Task front(Queue q){
	return q.Front->t;
}

Queue addQ(Queue q , Task t){
		Element *n = (Element *)malloc(sizeof(Element));
		n->t = t;
		n->next = NULL;
		if(q.Rear != NULL)
		q.Rear->next = n;
		else {
			q.Front = n;
			q.Rear = n;
		}
		q.Rear = n;
		return q;
}

void printTask(Task t){
	printf("Task id :  %d  Priority :  %d  \n", t.id, t.priority);
}

int lengthQ(Queue q){
	Element *n = q.Front;
	int count = 0;
	while(n != NULL){
		count++;
		n = n->next;
	}
	return count;
}

void printQ(Queue q){
	Task t;
	Element *n = q.Front;
	while(n != NULL){
		printTask(n->t);
		n = n->next;
	}
}
