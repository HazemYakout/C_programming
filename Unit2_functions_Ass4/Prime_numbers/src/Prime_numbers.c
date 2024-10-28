/*
 ============================================================================
 Name        : Prime_numbers.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : Prime_Numbers.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int isprime(int input);
int main(void)
{
	int in1, in2, i, flag;
	fflush(stdin);fflush(stdout);
	printf("Enter two numbers interval: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d", &in1, &in2);
	fflush(stdin);fflush(stdout);
	printf("Prime numbers between %d and %d are: ", in1, in2);
	fflush(stdin);fflush(stdout);
	for(i = in1 + 1; i < in2; i++)
	{
		flag = isprime(i);
		if(flag == 0)
		{	fflush(stdin);fflush(stdout);
			printf("%d ", i);
			fflush(stdin);fflush(stdout);
		}
	}
	fflush(stdin);fflush(stdout);
	printf("\n");
	fflush(stdin);fflush(stdout);
	return 0;
}

int isprime(int input) {
	if (input <= 1) return 1;
	for(int i = 2; i <= input / 2; i++) {
		if(input % i == 0) {
			return 1;
		}
	}
	return 0;
}




