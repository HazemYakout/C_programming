/*
 ============================================================================
 Name        : Q4.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Check Whether a Number is Positive or Negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num;
		fflush(stdout);fflush(stdin);
		printf("Enter a number: ");
		fflush(stdout);fflush(stdin);
		scanf("%f",&num);
		if (num>0)
			printf("%.2f is positive",num);
		else if (num<0)
			printf("%.2f is negative",num);
		else
			printf("You entered zero.");


		return 0 ;
}
