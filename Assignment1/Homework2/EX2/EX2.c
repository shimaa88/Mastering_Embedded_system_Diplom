#include "stdio.h"
int main()
{char c;
printf("Enter an alphabet :");
fflush(stdout);
scanf("%c",&c);
if(c=='a'||c=='o'||c=='i'||c=='u'||c=='e')
printf("%c is a Vowel",c);
else
	printf("%c is consonant",c);
}
