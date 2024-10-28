/*
 ============================================================================
 Name        : Reverse_string.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str1[1000];
	char str2[1000];
	int length, i;
	fflush(stdout);fflush(stdin);
	printf("Enter string: ");
	fflush(stdout);fflush(stdin);
	gets(str1);
	fflush(stdout);fflush(stdin);
	length = strlen(str1);
	for (i = 0; i < length; i++) {
		str2[i] = str1[length - 1 - i];
	}
	str2[length] = '\0';
	fflush(stdout);fflush(stdin);
	printf("Reversed string: %s\n", str2);
	fflush(stdout);fflush(stdin);
	return 0;
}
