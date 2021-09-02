#include "cstring.h"

int strlen_f(const char* str){
	int c = 0;
	while(str[c++] != '\0');

	return c-1;
}

char* strcpy_f(char* dest, const char* src){
	assert(dest!=NULL);
	assert(src!=NULL);
	char* ret = dest;
	while(*(dest++) = *(src++));
	return ret;
}

char* strcat_f(char* dest, const char* src){
	assert(dest!=NULL);
	assert(src!=NULL);
	char* ret = dest;

	while(*dest++);
	*dest--;
	while(*(dest++) = *(src++));
	return ret;
}


int strcmp_f(const char* str1, const char* str2){
	while(*str1 && *str2 && *str1==*str2){
		str1++;
		str2++;
	}
	
	return *str1 - *str2;
}
const char* strchr_f(const char* str, char c){
	assert(str!=NULL);
	while(*str!=NULL && *str!=c) str++;

	return *str == c ? str : NULL;
}

void prefix(const char* str, int size, int* pi){
	pi[0] = 0;
	int k = 0;

	for(int i = 1; i < size; i++){
		while(k>0 && str[k]!=str[i])
			k = pi[k-1];
		if (str[k] == str[i]) k++;
		pi[i] = k;
	}

}

int strstr_f(const char* T,const char* P){
	int N = strlen_f(T), M = strlen_f(P);

	int pi[M];
	prefix(P,M,pi);
		/*printf("pi= ");
	for(int i=0;i<M;i++) printf("%d ",pi[i]);
		printf("\n");*/

	int i,idx = 0;
	for(i = 0; i < N; i++){
		while(idx>0 && P[idx]!=T[i])
			idx = pi[idx-1];
		if(P[idx] == T[i]) idx++;
		if(idx == M) return (i-idx+1);
	}

	return -1;
}