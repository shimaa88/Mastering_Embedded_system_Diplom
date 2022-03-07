#include "stdio.h"
int main()
{float num1;
printf("Enter a number :");
fflush(stdout);
scanf("%f",&num1);
if(num1>0)
	printf("%f is Positive",num1);
else if(num1<0)
	printf("%f is Negative",num1);
else
	printf("You entered Zero");
}
