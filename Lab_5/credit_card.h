#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 50

struct card_info{
	char last_name[MAX], first_name[MAX], bank_code[MAX], exp_date[MAX];
	unsigned long  card_num;
};
typedef struct card_info CARD;
CARD *card_list;
