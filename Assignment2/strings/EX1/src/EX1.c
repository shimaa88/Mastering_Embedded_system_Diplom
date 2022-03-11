
#include <stdio.h>
#include "string.h"
#define SIZE   50
int main(void) {
char st[SIZE];
char c;
int i,max=0;
printf("Enter a string:");
fflush(stdout);
gets(st);
printf("Enter a character to find frequency:");
fflush(stdout);
scanf("%c",&c);
for(i=0;i<strlen(st);i++)
{if(c==st[i])
	max++;

}
printf("frequency of e=%d",max);
fflush(stdout);
}

