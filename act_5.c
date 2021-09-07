#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char str[50];
	char *p;
	scanf("%s", str);
    p = str;

	while (*p != '\0'){
        printf("%c",p);
        p++;
            while(*p == *(p-1)){
            p++;
            }
    }

return 0;
}   