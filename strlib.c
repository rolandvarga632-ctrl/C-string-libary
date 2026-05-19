#include<stddef.h>
#include"strlib.h"

size_t strlen(char *str)
{
	size_t len = 0;
	while(*str != '\0')
	{
		len++;
		str++;
	}

	return len;
}

char* strcpy(char *des, char *from) {
	char *o_des = des;

	while(*from != '\0') {
		*des = *from;
		des++;
		from++;
	}

	*des = '\0';

	return o_des;
	
}
