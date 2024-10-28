/*
 ============================================================================
 Name        : letter_frequency.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Write C code here
    char str[1000];
    char find;
    int i,count=0;
    fflush(stdout);fflush(stdin);
    printf("Enter string : ");
    fflush(stdout);fflush(stdin);
    gets(str);
    fflush(stdout);fflush(stdin);
    printf("\nEnter character to find frequency : ");
    fflush(stdout);fflush(stdin);
    scanf("%c",&find);
    fflush(stdout);fflush(stdin);
    for(i=0;i<1000;i++)
    {
        if(str[i]==find)
        count++;
    }
    printf("\n Frequency of %c = %d" ,find,count);
    fflush(stdout);fflush(stdin);

    return 0;
}
