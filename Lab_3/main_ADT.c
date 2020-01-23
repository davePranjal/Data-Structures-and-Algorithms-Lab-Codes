#include <stdio.h>
#include <stdlib.h>
#include<sys/time.h>
//#include "que.h"
#include "multiq.h"
MultiQ loadData(FILE *f);
MultiQ testDel(int num, MultiQ mq);
int main(int num, char *args[]){
	FILE *f = fopen(args[1], "r");
	MultiQ mq = createMQ(10);
//Queue q = newQ();
	struct timeval t1,t2,t3,t4;
	double elaspsedTime;
	gettimeofday(&t1,NULL);
	mq = loadData(f);
	gettimeofday(&t2,NULL);
//	elaspsedTime = (t2.tv_sec - t1.tv_sec)*1000.0;
elaspsedTime+= (t2.tv_usec - t1.tv_sec)/1000.0;
	printf("Total time in loading data is %d ms. \n", elaspsedTime);
	//printMQ(mq);
	gettimeofday(&t3,NULL);
	mq = testDel(10,mq);
	gettimeofday(&t4,NULL);
	elaspsedTime+= (t4.tv_usec - t3.tv_sec)/1000.0;
	printf("Total time  in deletion  is %d ms. \n", elaspsedTime);
	//printMQ(mq);
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
fclose(f);
}
MultiQ loadData(FILE *f){
	MultiQ mq = createMQ(10);
	Task t;
	while(!feof(f)){
			fscanf(f, "%d,%d", &t.id, &t.priority);
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
