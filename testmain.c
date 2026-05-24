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

	//strncpy(array2,dest,n);		
	//array2[n] = '\0';
	//printf("%s\n",array2);

	// test strcat() function
	strcat(array2,str);
	printf("%s\n\n",array2);
	char tomb[10] = "a";
	char tomb2[10] = "ab";

	printf("%d\n",strcmp(tomb,tomb2));

	// test strncmp
	printf("%d\n", strncmp(tomb,tomb2,1));
	// free memory
	free(dest);


	return 0;
}
