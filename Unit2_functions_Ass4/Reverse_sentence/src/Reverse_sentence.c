/*
 ============================================================================
 Name        : Reverse_sentence.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Reverse();
int main(void)
{	fflush(stdin);fflush(stdout);
	printf("Enter Sentence : \n");
	fflush(stdin);fflush(stdout);
	Reverse();
	fflush(stdin);fflush(stdout);
	return 0;
}
void Reverse()
{
	char c;
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	fflush(stdin);fflush(stdout);
	if(c!='\n')
	{
		fflush(stdin);fflush(stdout);
		Reverse();
		fflush(stdin);fflush(stdout);
		printf("%c",c);
		fflush(stdin);fflush(stdout);
	}
}
