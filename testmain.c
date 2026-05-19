#include"strlib.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

int main(){
	
	char str[20] = "roland";
	char *dest =(char*)malloc(sizeof(str));
	char array[20];
	char array2[20] = {"hello"};
	size_t n = 5;

	// test strlen() function
	printf("%ld\n",strlen(str));
	
	// test strcpy() function
	strcpy(dest,str);
	printf("%s\n",dest);
	
	// test strncpy() function
	strncpy(array,dest,n);
	array[n] = '\0';
	printf("%s\n",array);

	strncpy(array2,dest,n);		
	array2[n] = '\0';

	printf("%s\n",array2);

	free(dest);

	return 0;
}
