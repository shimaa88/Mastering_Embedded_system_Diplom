/*
 ============================================================================
 Name        : EX1.c
 Author      : shimaa
 Version     :
 Copyright   :
 Description : function to print prime numbers between two input numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prime_Num(int a,int b);
int main(void) {
	int num1,num2;
	printf("Enter two numbers(intervals):");
		fflush(stdout);
		scanf("%d %d",&num1,&num2);
	prime_Num(num1,num2);
}
void prime_Num(int a,int b)
{int i;
printf("prime numbers between %d and %d are:",a,b);
fflush(stdout);
	for(i=a+1;i<b;i++)
	{if((i%2)!=0)
		{printf("%d  ",i);
		fflush(stdout);
	}}



}
