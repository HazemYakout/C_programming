/*
 ============================================================================
 Name        : Sum_2x2Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int r,c;
	float arr_1[2][2];
	float arr_2[2][2];
	float sum [2][2];
	fflush(stdout);fflush(stdin);
	printf("Enter the first matrix :\n");
	fflush(stdout);fflush(stdin);
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			fflush(stdout);fflush(stdin);
			printf("a[%d][%d]:",r+1,c+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&arr_1[r][c]);
			fflush(stdout);fflush(stdin);
		}
	}

	printf("Enter the second matrix :\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			fflush(stdout);fflush(stdin);
			printf("a[%d][%d]:",r+1,c+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&arr_2[r][c]);
		}
	}

	printf("The sum of the matrices:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			sum[r][c]=arr_1[r][c]+arr_2[r][c];
			fflush(stdout);fflush(stdin);
			printf("a[%d][%d] = %.2f\t",r+1,c+1,sum[r][c]);
			fflush(stdout);fflush(stdin);
		}
		printf("\n");
		fflush(stdout);fflush(stdin);
	}

	return 0;
}
