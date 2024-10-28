/*
 ============================================================================
 Name        : Q7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Find Factorial of a Number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, count;
	unsigned long int factorial=1;
	fflush(stdout);fflush(stdin);
	printf("Enter an integer: ");
	fflush(stdout);fflush(stdin);
	scanf ("%d", &n) ;
	fflush(stdout);fflush(stdin);
	if  (n<0)
		printf(" Error!!! Factorial of negative number doesn't exist ");
				else
				{
					for(count=1; count<=n;count++)
					{
						factorial*=count;
					}
					printf("Factorial = %lu", factorial);
				}
				return 0;
}