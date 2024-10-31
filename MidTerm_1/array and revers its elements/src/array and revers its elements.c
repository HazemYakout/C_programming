/*
 ============================================================================
 Name        : array.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdlib.h>
#include <stdio.h>
void reverseArray(int arr[], int size) ;
void printArray(int arr[], int size);
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,size);
    reverseArray(arr, size);


    return 0;
}
void reverseArray(int arr[], int size) {
	int temp[5];
    for (int i = 0; i < size; i++)
    {

        temp[i] = arr[size - 1 - i];
        printf("%d ", temp[i]);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

