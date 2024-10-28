/*
 ============================================================================
 Name        : Factorial.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
unsigned long long factorial(int n);

int main() {
    int number;

    fflush(stdin);fflush(stdout);
    printf("Enter a positive integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &number);
    fflush(stdin);fflush(stdout);
    if (number < 0) {
    	fflush(stdin);fflush(stdout);
        printf("Factorial is not defined for negative numbers.\n");
    } else {
    	fflush(stdin);fflush(stdout);
        printf("Factorial of %d = %llu\n", number, factorial(number));
    }

    return 0;
}

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); // Recursive case
    }
}
