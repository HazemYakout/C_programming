/*
 ============================================================================
 Name        : number_sum.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sumdigits(int num);
int main(void)
{
	int num;
	fflush(stdin);fflush(stdout);
	printf("Enter a number :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	fflush(stdin);fflush(stdout);
	printf("The sum of digits : %d",sumdigits(num));
	fflush(stdin);fflush(stdout);
	return 0;
}
int sumdigits(int num)
{
	static int re=0; int temp;
	if(num>0)
	{
		temp=num%10;
		re+=temp;
		sumdigits(num/10);

	}
	else
		return 0;
	return re;
}