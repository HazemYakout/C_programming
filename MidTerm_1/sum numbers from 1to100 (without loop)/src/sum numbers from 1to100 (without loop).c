/*
 ============================================================================
 Name        : sum.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description :Get the sum of numbers from 1 to 100(without loop)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum();
int main(void) {
sum();
	return 0;
}
void sum()
{
	int static count =100;
	int static tot=0;
	if(count>=0)
	{
		tot+=count;
		--count;
		sum();
	}
	else if (count<0)
	{
		fflush(stdin);fflush(stdout);
        printf("The sum = %d\n", tot);
    }

}
