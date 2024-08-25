/*
 ============================================================================
 Name        : Q3.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Find the Largest Number Among Three Numbers

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num1,num2,num3;
	fflush(stdout);fflush(stdin);
	scanf("%f%f%f",&num1,&num2,&num3);
	fflush(stdout);fflush(stdin);
	if(num1>num2&&num1>num3)
	{
		printf("Largest num is: %f ",num1);
		fflush(stdout);fflush(stdin);
	}
	else if(num2>num1&&num2>num3)
	{
		printf("Largest num is: %f ",num2);
		fflush(stdout);fflush(stdin);
	}
	else
		printf("Largest num is: %f ",num3);
	fflush(stdout);fflush(stdin);

	return 0;




}



