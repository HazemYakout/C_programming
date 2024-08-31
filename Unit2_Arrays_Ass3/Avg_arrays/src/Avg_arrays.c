/*
 ============================================================================
 Name        : Avg_arrays.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n;
	float arr_1[1000],sum=0;
	fflush(stdout);fflush(stdin);
	printf("Enter the number of data :\n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	fflush(stdout);fflush(stdin);
	for(i=0;i<n;++i)
	{
		fflush(stdout);fflush(stdin);
		printf("%d. Enter number :",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%f",&arr_1[i]);
		fflush(stdout);fflush(stdin);
	}

	for(i=0;i<n;++i)
	{
		sum=sum+arr_1[i];
		fflush(stdout);fflush(stdin);
	}
    printf("Averge equal :\n%.2f",sum/n);
	return 0;
}
