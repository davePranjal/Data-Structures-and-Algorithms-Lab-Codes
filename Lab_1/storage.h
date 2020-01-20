/* Defines the structure of Job and typedef for int and enum */  
#define MAX 10
#define MAX_SEQ_LIST 3

typedef enum {PRI_0, PRI_1, PRI_2} PRIORITY;
typedef enum {LESSER , GREATER , EQUAL} ORDER;
typedef int JOB_ID;
typedef int EXECUTION_TIME;
typedef int ARRIVAL_TIME;

typedef struct
{
 JOB_ID id;
 PRIORITY pri;
 EXECUTION_TIME et;
 ARRIVAL_TIME at;
} Job;

typedef Job joblist[MAX];

typedef Job STORE[MAX];

STORE st;
