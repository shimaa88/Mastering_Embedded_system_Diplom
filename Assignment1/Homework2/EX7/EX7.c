 #include "stdio.h"
unsigned int fact(int num)
{
	if (num==0||num==1)
return 1;
	else
		return num*fact(num-1);


}
int main()
{int num;
printf("Enter an integer :");
fflush(stdout);
scanf("%d",&num);
if(num<0)
printf("Error!!!Factorial of negative number dosen't exist.");
else
	printf("Factorial=%u",fact(num));
}
