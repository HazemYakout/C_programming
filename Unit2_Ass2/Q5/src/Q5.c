/*
 ============================================================================
 Name        : Q5.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Check Whether a Character is an Alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char x;
	fflush(stdout); fflush(stdin);
	printf("Enter a character: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	fflush(stdout); fflush(stdin);
	if((x>='A' && x<='Z')||(x>='a'&& x<='z'))
		printf("%c is an alphabet:",x);
	else
		printf("%c is not an alphabet: ",x);
	return 0;
}
