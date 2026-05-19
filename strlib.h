#ifndef STRLIB_H
#define STRLIB_H
#include<stddef.h>

size_t strlen(char *str);
char* strcpy(char *dest, char *source);
char* strncpy(char *dest, char *source, size_t n);

#endif
