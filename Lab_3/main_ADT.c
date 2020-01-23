#include <stdio.h>
#include <stdlib.h>
//#include "que.h"
#include "multiq.h"
MultiQ loadData(FILE *f);
MultiQ testDel(int num, MultiQ mq);
int main(int num, char *args[]){
	FILE *f = fopen(args[1], "r");
	MultiQ mq = createMQ(10);
	mq = loadData(f);
	fclose(f);
	//Queue q = newQ();
printMQ(mq);
	// bool b ;
	// 	b = isEmptyMQ(mq);
	// 	printf(b? "true" : "false");
	// 	printf("\n");
	// printf(b? "true" : "false");
	// printf("\n");
	// Task p,q,r,s,t;
	// p.priority = 1;
	// p.id = 877;
	// q.priority = 2;
	// q.id = 634;
	// r.priority = 4;
	// r.id = 564;
	// s.priority = 4;
	// s.id = 222;
	// t.priority = 1;
	// t.id = 4432;
	// mq = addMQ(mq,p);
	// mq = addMQ(mq,q);
	// mq = addMQ(mq,r);
	//  mq = addMQ(mq,s);
	//

// 	// q = addQ(q,3);
// 	// q = addQ(q,0);
	// int l = sizeMQ(mq);
	// printf("%d\n",l );
// 	// q = delQ(q);
// int r1 = sizeMQbyPriority(mq, 1);
//  printf("%d\n",r1 );

}
MultiQ loadData(FILE *f){
	int i[20];
	int j[20];
	int count = 0,k;
	while( !feof(f)){
			fscanf(f, "%d,%d", &i[count], &j[count]);
			count++;
		}
		MultiQ mq = createMQ(count);
		for(k= 0; k<count; k++){
			Task t;
			t.priority = j[k];
			t.id = i[k];
			mq = addMQ(mq,t);
		}
		return mq;
	}
	MultiQ testDel(int num, MultiQ mq){
		for(int i = 0;i<num; i++){
				mq	=delNextMQ(mq);
		}
		return mq;
	}
