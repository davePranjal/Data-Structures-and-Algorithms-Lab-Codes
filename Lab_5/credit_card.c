
#include "credit_card.h"

int main(int n, char *args[])
{
	card_list = (CARD*)malloc(sizeof(CARD)*10);
	//printf("%d\n",sizeof(card_list) );
	//printf("%d\n",sizeof(CARD) );
	FILE *fptr = fopen(args[1], "r");
	if(fptr ==NULL)
	{
		printf("No file given\n");
		exit(0);
	}
	//char *first_name, *last_name = NULL, *bank_code, *exp_date;
  long num;
	int count =0;
	int curr_size = 10;
	//while(!feof(fptr))
	//fscanf(fptr, "/"%d,%[^,],%s,%s,%s\n",&card_num,bank_code, exp_date,first_name,last_name);
	//printf("%d,%s,%s,%s,%s\n",card_num,bank_code, exp_date,first_name,last_name);
	//fscanf(fptr, "%s\n",last_name);
	//printf("%s\n",*last_name);
	//fgets(last_name, 300,fptr);
	//while(fgetc(fptr) != EOF)
	while(!feof(fptr))
	{
		fscanf(fptr, "\"%l,%[^,],%[^,],%[^,],%[^\"]",
			&num,card_list[count].bank_code,
			card_list[count].exp_date,card_list[count].first_name,
			card_list[count].last_name);
			card_list[count++].card_num  = num;
		//printf("%s %s %s %s\n",bank_code,exp_date,first_name,last_name);
	printf("%ul \n", num );
	//	count++;
	//printf("%d\n",count );
//	printf("%d\n",(int)(sizeof(card_list)/sizeof(CARD)) );
		if(count>= curr_size)
			{
				card_list = (CARD*)(realloc(card_list, curr_size*2+2));
				curr_size = curr_size*2+2;
			}
	}
	//char ch ;
	//ch = fgetc(fptr) ;
	//printf("%c \t",ch) ;
	//fscanf(fptr,"%[^\n]",last_name) ;
	//puts(last_name);

	fclose(fptr);
}
