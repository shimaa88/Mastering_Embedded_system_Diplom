#include "stdio.h"
int main()
{float num1,num2,num3;
printf("Enter three numbers :");
fflush(stdout);
scanf("%f""%f""%f",&num1,&num2,&num3);
if((num1>num2)&&(num1>num3))
	printf("Largest number =%f",num1);
else if((num2>num1)&&(num2>num3))
	printf("Largest number =%f",num2);
else
	printf("Largest number =%f",num3);
}
