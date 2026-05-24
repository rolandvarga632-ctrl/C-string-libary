#ifndef STRLIB_H
#define STRLIB_H
#include<stddef.h>

size_t strlen(const char *str);
char* strcpy(char *dest, const char *source);
char* strncpy(char *dest, const char *source, size_t n);
char* strcat(char *dest, const char *source);
int strcmp(const char *str1, const char *str2);
int strncmp(const char *str1, const char *str2, size_t n);

#endif
