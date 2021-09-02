#ifndef _CSTRING_H_
#define _CSTRING_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int strlen_f(const char* str);
char* strcpy_f(char* dest, const char* src);
char* strcat_f(char* dest, const char* src);
int strcmp_f(const char* str1, const char* str2);
const char* strchr_f(const char* str, char c);
int strstr_f(const char* S,const char* T);

#endif