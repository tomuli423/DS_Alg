#include "cstring.h"

int main(){

	char* str1 = "12313212324";
	char* str2 = "232";
	
	printf("%d\n",strstr_f(str1,str2));

	return 0;
}