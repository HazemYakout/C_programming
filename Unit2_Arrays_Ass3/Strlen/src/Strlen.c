/*
 ============================================================================
 Name        : Strlen.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	  char str[1000];
	    int i;
	    fflush(stdout);fflush(stdin);
	    printf("Enter string : ");
	    fflush(stdout);fflush(stdin);
	    gets(str);
	    fflush(stdout);fflush(stdin);
	    for(i=0;str[i]!='\0';i++);
	    fflush(stdout);fflush(stdin);
	    printf("\n length of string = %d" ,i);
	    fflush(stdout);fflush(stdin);
	    return 0;
}
