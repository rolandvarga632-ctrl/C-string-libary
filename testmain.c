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

	// test memcpy
	int array3[3] = {10,20,30};
	int *array4 = malloc(sizeof(array3));
	memcpy(array4,array3,sizeof(array3));
	for(int i = 0;i<3;i++) {
		printf("%d\n",array4[i]);
	}
	free(array4);
	
	free(dest);

	//char szoveg[5] ="ABCD";

	//memmove(szoveg+1,szoveg,2);
	//printf("%s\n",szoveg);

	return 0;
}
