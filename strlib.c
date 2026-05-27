#include<stddef.h>
#include"strlib.h"

size_t strlen(const char *str)
{
	size_t len = 0;
	while(*str != '\0')
	{
		len++;
		str++;
	}

	return len;
}

char* strcpy(char *dest,const char *source) {
	char *org_dest = dest;

	while(*source != '\0') {
		*dest = *source;
		dest++;
		source++;
	}

	*dest = '\0';

	return org_dest;
	
}

char* strncpy(char *dest,const char *source, size_t n) {
	char *org_dest = dest;
	
	size_t i;
	for(i = 0;i<n && source[i] != '\0';i++) {
		dest[i] = source[i];
	}

	for(;i<n;i++) {
		dest[i] = '\0';
	}

	return org_dest;
}

char* strcat(char *dest, const char *source) {
	char *org_dest = dest;

	size_t i = strlen(dest);
	while(*source != '\0') {
		dest[i] = *source;
 		source++;
		i++;
	}
	dest[i] = '\0';


	return org_dest;
}	

int strcmp(const char *str1, const char *str2) {
	
	size_t i = 0;
	while(str1[i] != '\0' && str2[i] != '\0') {
		int a = (int)str1[i];
		int b = (int)str2[i];
		int value = a-b;
		
		if(value != 0) {
			return value;
		}

		i++;
	}
	return (int)str1[i] - (int)str2[i];	
	
}

int strncmp(const char *str1, const char *str2, size_t n) {
	size_t i = 0;
	while(i<n && (str1[i] != '\0' && str2[i] != '\0')) {
		int a = (int)str1[i];
		int b = (int)str2[i];
		int value = a- b;

		if(value != 0) {
			return value;
		}

		i++;
	}
	if(i==n) return 0;
	return (int)str1[i] - (int)str2[i];
}

void* memcpy(void *dest, const void *src, size_t n) {
	unsigned char *d = (unsigned char*)dest;
	const unsigned char *s = (const unsigned char*)src;

	for(size_t i = 0; i < n; i++) {
		d[i] = s[i];
	}

	return dest;
}

