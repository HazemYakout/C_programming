/*
 ============================================================================
 Name        : Unit2_Ass1_Q5.c
 Author      : Hazem Yakout
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    char x;
    printf("Enter a character: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&x);
    fflush(stdin);fflush(stdout);
    printf("ASCII value of %c = %d",x,x);
    return 0;
}
