/*
 ============================================================================
 Name        : EX2.c
 Author      : shimaa
 Version     :
 Copyright   : Your copyright notice
 Description :function to calculate factorial of number using recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
unsigned int factorial(int num);
int main(void) {
	int num1;
	printf("Enter an positive integer:");
	fflush(stdout);
	scanf("%d", &num1);
	printf("factorial of %d = %u",num1,factorial(num1));
	fflush(stdout);

}
unsigned int factorial(int num) {
if(num==0||num==1)
{return 1;}

	return num*(factorial(num-1));
}
