/*
 ============================================================================
 Name        : reverse.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Reverse the Sentence
 ============================================================================
 */
void reverse_sentence(char str[], char reverse[]) ;
#include <stdio.h>
#include <string.h>
#define max 100
int main() {
    char str[max], reverse[max];
    fflush(stdin);fflush(stdout);
    printf("Enter any string: ");
    fflush(stdin);fflush(stdout);
    gets(str);
    fflush(stdin);fflush(stdout);
    reverse_sentence(str, reverse);
    fflush(stdin);fflush(stdout);
    printf("Original string:\n%s\n\n", str);
    fflush(stdin);fflush(stdout);
    printf("Reversed ordered words:\n%s\n", reverse);
    fflush(stdin);fflush(stdout);
    return 0;
}
void reverse_sentence(char str[], char reverse[])
{
    int len = strlen(str);
    int index = 0, wordStart = len - 1, wordEnd = len - 1;
    while (wordStart >= 0)
    {
        if (str[wordStart] == ' ' || wordStart == 0)
        {
            int start;
            if (str[wordStart] == ' ')
            {
                start = wordStart + 1;
            } else {
                start = wordStart;
            }
            for (int i = start; i <= wordEnd; i++)
            {
                reverse[index++] = str[i];
            }
            if (wordStart > 0)
            {
                reverse[index++] = ' ';
            }
            wordEnd = wordStart - 1;
        }
        wordStart--;
    }
    reverse[index] = '\0';
}

