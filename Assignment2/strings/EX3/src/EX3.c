
#include <stdio.h>
#include "string.h"
#define SIZE   50
int main(void) {
char st[SIZE],st2[SIZE];
int i=0;
printf("Enter a string:");
fflush(stdout);
gets(st);
int j=strlen(st);
j--;
while(j>=0)
{
	st2[i]=st[j];
	i++;
	j--;
}
st2[(strlen(st))]=0;
printf("Reverse string is :%s",st2);
fflush(stdout);
}

