/*
 ============================================================================
 Name        : Q8.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char x;
	float num1,num2;
	fflush(stdout);fflush(stdin);
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdout);fflush(stdin);
	scanf("%c", &x) ;
	fflush(stdout);fflush(stdin);
	printf("Enter two operands:\n ");
	fflush(stdout);fflush(stdin);
	scanf("%f%f" ,&num1 , &num2) ;
	fflush(stdout);fflush(stdin);
	switch(x)
	{
	case '+':
		printf("%.1f + %.1f = %f",num1,num2,num1+num2);
		break;

	case '-':
		printf("%.1f - %.1f = %f",num1,num2,num1-num2);
		break;

	case '/':
		printf("%.1f - %.1f = %f",num1,num2,num1/num2);
		break;

	case '*':
		printf("%.1f - %.1f = %f",num1,num2,num1*num2);
		break;

	default:
		printf("invalid input ");


	}
	return 0;
}

