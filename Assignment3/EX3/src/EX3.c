/*
 ============================================================================
 Name        : EX3.c
 Author      : shimaa
 Version     :
 Copyright   : Your copyright notice
 Description : function to Reverse a sentance using recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void recursion();
int main(void) {
	printf("Enter a sentence:");
		fflush(stdout);
	 recursion();

}
void recursion()
{char c;
scanf("%c",&c);
   if(c!='\n')
	{
	recursion();
	printf("%c",c);
	}
}











