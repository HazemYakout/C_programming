/*
 ============================================================================
 Name        : square_root.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : getting a square root of a number
 ============================================================================
 */
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

float SquareRoot(int num);
int main ()
{
	int num ;
	printf ("Enter a number to find its square root: ");
	fflush(stdin);fflush(stdout);
	scanf ("%d", &num);
	printf ("\nThe square root of %d is: %.3f.", num, SquareRoot(num) );

	return 0;
}
float SquareRoot(int num)
{
	return sqrt(num);
}
