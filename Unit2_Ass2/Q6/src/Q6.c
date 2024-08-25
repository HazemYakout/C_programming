/*
 ============================================================================
 Name        : Q6.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Calculate Sum of Natural Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n, i, sum=0;
	fflush(stdout);fflush(stdin);
	printf("Enter an integer: ");
	fflush(stdout);fflush(stdin);
	scanf ("%d", &n) ;
	fflush(stdout);fflush(stdin);
	for(i=0;i<=n;i++)
		sum+=i;
	printf("Sum = %d", sum);
	return 0;

}
