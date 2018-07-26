

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void linear(void)  {

	char *str;
	int i,n,key;
	
	printf("enter the no. of elements:");
	scanf("%d",&n);
	
	str = (char *)malloc(sizeof(char) * 100);
	if (!str) {
		printf("Malloc error\n");
		return;
	}
	printf("enter the elements:\n");
	for(i=0;i<n;i++) {
		printf("enter the %d element:",i+1);
		memset(str, 0, sizeof(char) * 100);
		scanf("%s", str);
		printf("Str: %s\n", str);
		if(isdigit(str[i]) == 0) {
			printf("invalid!! please try again...");
			return;
		}
	}
	printf("enter the element to search");
	scanf("%d",&key);
	
	for(i=0;i<n;i++) {
		if(key==str[i])  {
			printf("key found at position %d\n",i+1);
			break;
		}
	}

		if(i==n) 
			printf("key not found\n");

}
