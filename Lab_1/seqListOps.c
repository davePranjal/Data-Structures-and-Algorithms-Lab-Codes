/* Contains operations which can be performed on the seqList*/
#include <stdio.h>
#include "compare.h"
int nextfreeloc = 0;
int lastindex = 0;

void insert(Job);
void printjob (Job);


void insertelements (joblist list)
{
  int n,i;
  Job j;
  PRIORITY p;
for(i=0; i<3;i++){
  for(n=0;n<MAX;n++){

  if(list[n].pri == i)
    {
      insert(list[n]);
    }

  }
}
}

void insert(Job j2){
  int i = 0,k;
  while(compare(st[i],j2) != GREATER && st[i].pri >= j2.pri && st[i].at != 0){
    i++;
  }
  Job temp  = st[i];
  st[i] = j2;
  for(k= MAX -2 ; k>i; k--){
    if(st[k].at ==0)
      continue;
    st[k+1] = st[k];
  }
  st[i+1] = temp ;
}

void printjob (Job j)
{
 printf ("JOB ID = %d, Priority = %d, Execution time = %d, Arrival time = %d \n",j.id,j.pri,j.et,j.at);
}

void printjoblist (joblist list)
{
  int n;
  Job j ;
  for(n = 0; n<MAX; n++){
    j = list[n];
    printjob(j);
  }

}

void initialize_elements (joblist ele)
{
 int i,size;
 i=0;
 ele[0].id=1;
 ele[0].pri=0;
 ele[0].at=1;
 ele[0].et=5;
 ele[1].id=2;
  ele[1].pri=1;
   ele[1].at=9;
    ele[1].et=3;
ele[2].id=3;
 ele[2].pri=2;
  ele[2].at=11;
   ele[2].et=12;
ele[3].id=4;
 ele[3].pri=0;
  ele[3].at=4;
   ele[3].et=7;
ele[4].id=5;
 ele[4].pri=1;
  ele[4].at=8;
   ele[4].et=2;
ele[5].id=6;
 ele[5].pri=2;
  ele[5].at=12;
   ele[5].et=11;
ele[6].id=7;
 ele[6].pri=0;
  ele[6].at=3;
   ele[6].et=9;
ele[7].id=8;
 ele[7].pri=1;
  ele[7].at=7;
   ele[7].et=4;
ele[8].id=9;
 ele[8].pri=2;
  ele[8].at=13;
   ele[8].et=10;
ele[9].id=10;
 ele[9].pri=0;
  ele[9].at=2;
   ele[9].et=15;
}

void copy_sorted_ele(joblist ele)
{
  int n;
  for(n=0; n<MAX; n++){
       ele[n] = st[n];
       }
}
