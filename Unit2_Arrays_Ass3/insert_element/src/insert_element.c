/*
 ============================================================================
 Name        : insert_element.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, num, in, location;
	int A[100];

	// Input number of elements
	fflush(stdout);fflush(stdin);
	printf("Enter number of elements in the array: ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &num);
	fflush(stdout);fflush(stdin);

	printf("Enter the elements of the array:\n");
	fflush(stdout);fflush(stdin);
	for (i = 0; i < num; i++) {
		scanf("%d", &A[i]);
		fflush(stdout);fflush(stdin);
	}

	// Input element to be inserted and the location
	printf("Enter the element to be inserted: ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &in);
	fflush(stdout);fflush(stdin);
	printf("Enter the location where element should be inserted: ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &location);
	fflush(stdout);fflush(stdin);


	// Check if location is valid
	if (location < 1 || location > num + 1) {
		printf("Invalid location!\n");
		fflush(stdout);fflush(stdin);
	}

	// Shift elements to the right to make space for the new element
	for (i = num; i >= location; i--) {
		A[i] = A[i - 1];
	}

	// Insert the new element
	A[location - 1] = in;
	num++; // Update the number of elements

	// Print the updated array
	fflush(stdout);fflush(stdin);
	printf("Array after insertion:\n");
	for (i = 0; i < num; i++) {
		printf("%d ", A[i]);
		fflush(stdout);fflush(stdin);
	}

	printf("\n");
	fflush(stdout);fflush(stdin);
	return 0;
}
