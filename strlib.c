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

char* strcpy(char *dest, char *source) {
	char *org_dest = dest;

	while(*source != '\0') {
		*dest = *source;
		dest++;
		source++;
	}

	*dest = '\0';

	return org_dest;
	
}

char* strncpy(char *dest, char *source, size_t n) {
	char *org_dest = dest;
	
	if(*dest == '\0') {
		for(unsigned int i = 0;i<n;i++) {
			*dest = *source;
			dest++;
			source++;
		}

		*dest = '\0';

		return org_dest;

	}

	else if(*dest != '\0') {

		for(unsigned int i = strlen(dest);i<n+strlen(dest);i++) {
			dest = dest + i;
			*dest = *source;
			source++;
			dest = dest - i;
		
		}
		dest = dest + strlen(dest);
		*dest = '\0';
		return org_dest;

	}
	else {
		return "HIba";
	}
}
