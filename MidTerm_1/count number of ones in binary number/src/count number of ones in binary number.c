/*
 ============================================================================
 Name        : count.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : count the number of 1s in a binary presentation of a given number
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int binary_one(int num);
int main(void) {
	int num;
	fflush(stdin);fflush(stdout);
	printf("Enter number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	fflush(stdin);fflush(stdout);
	printf("\n %d",binary_one(num));
	fflush(stdin);fflush(stdout);
	return 0;
}
int binary_one(int num)
{
	int count=0;
	for (int i=0;i<32;i++)
	{
		if((num&(1<<i))!=0)
		count++;
	}
 return count;
}
