#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Task{
	int  priority ;
	int  id;
};
typedef struct Task Task;
struct Element{
	Task t;
	struct Element *next;
};
struct Queue{
	struct Element *Front;
	struct Element *Rear;
};
typedef struct Queue Queue;
typedef struct Element Element;
Queue newQ();
bool isEmptyQ(Queue q);
Queue delQ(Queue q);
Task front(Queue q);
Queue addQ(Queue q , Task t);
int lengthQ(Queue q);
void printTask(Task t);
void printQ(Queue q);
