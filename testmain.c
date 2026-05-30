#include"strlib.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

void print(char *str)
{
	int i = 0;
	while(*str != '\0')
	{
		printf("str[%d] = %p\n",i,str);
		str++;
		i++;
	}
}


int main(){

	char str[30] = "HELLO WORLD!";
	
	print(str);
	printf("%p\n",strchr(str,'\0'));
	

	
	return 0;
}
