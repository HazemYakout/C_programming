/*
 ============================================================================
 Name        : Q2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Check Vowel or Consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char x;
	fflush(stdout);fflush(stdin);
	printf("Enter an alphabet : \n");
	fflush(stdout);fflush(stdin);
	scanf("%c",&x);
	fflush(stdout);fflush(stdin);
	switch(x)
	{
	case'a':
	case'A':
	printf("%c is vowel",x);
	break;

	case'e':
	case'E':
	printf("%c is vowel",x);
	break;

	case'i':
	case'I':
	printf("%c is vowel",x);
	break;

	case'o':
	case'O':
	printf("%c is vowel",x);
	break;

	case'U':
	case'u':
	printf("%c is vowel",x);
	break;

	default:
		printf("%c is Constant",x);

	}


}
