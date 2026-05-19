#include"strlib.h"
#include<stdio.h>
#include<stdlib.h>
int main(){
	
	char str[20] = "roland";
	char *dest = malloc(sizeof(str));
	char array[20];
	char array2[20] = {"hello"};
	
	// test strlen() function
	printf("%ld\n",strlen(str));
	
	// test strcpy() function
	strcpy(dest,str);
	printf("%s\n",dest);
	
	// test strncpy() function
	strncpy(array,dest,5);
	printf("%s\n",array);

	strncpy(array2,dest,6);
	printf("%s\n",array2);

	free(dest);

	return 0;
}
