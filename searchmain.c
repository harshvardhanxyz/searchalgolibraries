

#include  <stdio.h>
#include  "lib_linear.h"
#include  "lib_binary.h"


void main()  {
	int choice;

	printf("________SEARCH_____________\n");
	printf("1.Linear \n 2.Binary \n");
	scanf("%d",&choice);

	switch(choice)  {

		case 1: linear();  break;

		case 2: binary();  break;

		default: printf("invalid!!");

	}
}


