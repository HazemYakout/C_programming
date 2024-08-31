/*
 ============================================================================
 Name        : linear_search.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
    int i, num, search, location;
    int A[100];

    fflush(stdout);fflush(stdin);
    printf("Enter number of elements in the array: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &num);
    fflush(stdout);fflush(stdin);

    // Input elements of the array
    fflush(stdout);fflush(stdin);
    printf("Enter the elements of the array:\n");
    fflush(stdout);fflush(stdin);
    for (i = 0; i < num; i++) {
        scanf("%d", &A[i]);
        fflush(stdout);fflush(stdin);
    }

    // Input element to be inserted and the location
    fflush(stdout);fflush(stdin);
    printf("Enter the element to be searched: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &search);
    fflush(stdout);fflush(stdin);
    for (i = 0; i < num; i++)
    {
        if(search==A[i]){
        fflush(stdout);fflush(stdin);
        printf("Number found at location %d ", i+1);}
    }
    printf("\n");

    return 0;
}
