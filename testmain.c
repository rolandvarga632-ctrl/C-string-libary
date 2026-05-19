#include"strlib.h"
#include<stdio.h>
#include<stdlib.h>
int main(){
	
	char str[20] = "roland";
	char *des = malloc(sizeof(str));

	printf("%ld\n",strlen(str));
	strcpy(des,str);
	printf("%s\n",des);

	free(des);

	return 0;
}
