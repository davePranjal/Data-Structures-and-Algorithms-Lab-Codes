#include "multiq.h"
MultiQ createMQ(int num){
	MultiQ mq;
	mq.Qarray = (Queue *)malloc(sizeof(Queue)*num);
	mq.size = num ;
	int i;
	for(i=0;i<num;i++){
		mq.Qarray[i] = newQ();
	}
	return mq;
}
MultiQ addMQ(MultiQ mq, Task t){
	int p = t.priority;
	Queue q = mq.Qarray[p-1];
	q = addQ(q,t);
	mq.Qarray[p-1] = q;
	return mq;
}
Task nextMQ(MultiQ mq){
	int n = mq.size;
	Queue q = mq.Qarray[n-1];
	Task t = front(q);
	return t;
}
MultiQ delNextMQ(MultiQ mq){
	int n = mq.size;
	Queue q = mq.Qarray[n-1];
	q = delQ(q);
	mq.Qarray[n-1] = q;
	return mq;
}
bool isEmptyMQ(MultiQ mq){
	bool isEmpty = true;
	int i;
	for(i=0; i< mq.size; i++){
		if(!isEmptyQ(mq.Qarray[i]))
			{isEmpty = false;
			break; }
	}
	return isEmpty;
}
int sizeMQ(MultiQ mq) {
	int i, size = 0;
	for(i=0;i<mq.size;i++)
		size = lengthQ(mq.Qarray[i]) + size;

	return size;
}
int sizeMQbyPriority(MultiQ mq, int p){
	return lengthQ(mq.Qarray[p-1]);
}
Queue getQueueFromMQ(MultiQ mq,  int p){
	return mq.Qarray[p-1];
}
void printTask(Task t){
	printf("Task id :  %d  Priority :  %d  \n", t.id, t.priority);
}
void printMQ(MultiQ mq){
	Task t;
	int size = mq.size,i;
	for(i = 0 ; i<size;i++)
		printQ(mq.Qarray[i]);

		//printTask(t);
	}
