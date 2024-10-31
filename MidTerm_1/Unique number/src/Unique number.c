/*
 ============================================================================
 Name        : Unique.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : GET THE UNIQUE NUMBER
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define max 3

int unique(int arr[max]);
int main(void)
{
	int arr[max];
	fflush(stdin);fflush(stdout);
	printf("Enter numbers to get the unique one : ");
	for (int i=0;i<max;i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
		fflush(stdin);fflush(stdout);
	}
	printf("The unique number is : %d ",unique(arr));
	fflush(stdin);fflush(stdout);
	return 0;
}
int unique(int arr[max])
{
	int unique = 0;
	for (int i = 0; i < max; i++)
	{
		unique ^= arr[i];
	}
	return unique;
}
