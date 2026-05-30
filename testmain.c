#include"strlib.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>


int main(){

	const char str[30] = "HELLO WORLD!";
	
	printf("%s\n",strstr(str,"ELLO"));
	

	
	return 0;
}
