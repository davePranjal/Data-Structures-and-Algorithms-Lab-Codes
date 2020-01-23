/* Main program */
#include <stdio.h>
#include <stdlib.h>
//#include<sys/time.h>
#include "multiq.h"
MultiQ loadData(FILE *f);
MultiQ testDel(int num, MultiQ mq);
int main(int num, char *args[]){
	FILE *f = fopen(args[1], "r");
	MultiQ mq = createMQ(10);
	//struct timeval t1,t2,t3,t4;
	//double elaspsedTime;
	//gettimeofday(&t1,NULL);
	mq = loadData(f);
//	gettimeofday(&t2,NULL);
	//elaspsedTime+= (t2.tv_usec - t1.tv_sec)/1000.0;
	//printf("Total time in loading data is %d ms. \n", elaspsedTime);
	//printMQ(mq);
	//gettimeofday(&t3,NULL);
	mq = testDel(10,mq);
//	gettimeofday(&t4,NULL);
	//elaspsedTime+= (t4.tv_usec - t3.tv_sec)/1000.0;
	//printf("Total time  in deletion  is %d ms. \n", elaspsedTime);
	fclose(f);
	return 1;
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
