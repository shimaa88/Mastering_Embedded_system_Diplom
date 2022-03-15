/*
 ============================================================================
 Name        : EX4.c
 Author      : shimaa
 Version     :
 Copyright   : Your copyright notice
 Description : function to calculate the power of number using recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int calc_Power(int num, int pow);
int main(void) {
	int base, pow, result;
	printf("Enter base number:");
	fflush(stdout);
	scanf("%d", &base);
	printf("Enter power number(positive integer):");
	fflush(stdout);
	scanf("%d", &pow);
	if (pow < 0) {
		printf("you Entered negative number(program exist)");
		fflush(stdout);
	}
	result = calc_Power(base, pow);

	printf("%d", result);
	fflush(stdout);
}
int calc_Power(int num, int pow) {
	if (pow == 0) {
		return 1;
	}

	return num * calc_Power(num, pow - 1);

}

