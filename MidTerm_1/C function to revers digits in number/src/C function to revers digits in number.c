/*
 ============================================================================
 Name        : C.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void reverse(int num);
int main(void)
{
	int num;
	fflush(stdin);fflush(stdout);
	printf("Enter number to be reversed : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	reverse(num);
	return 0 ;
}
void reverse(int num)
{
    int arr[1000];
    int size=0;
    for(int i=0;i<1000;i++)
    {
            if (num>0)
            {
                arr[i]=num%10;
                size++;
                num=num/10;
            }
            else break;

    }

    for(int i=0;i<size;i++)
    {   fflush(stdin);fflush(stdout);
        printf("%d",arr[i]);
    }

}
