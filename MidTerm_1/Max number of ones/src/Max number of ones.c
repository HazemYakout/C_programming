/*
 ============================================================================
 Name        : Max.c
 Author      : Hazem Yakout
 Version     :
 Copyright   : Your copyright notice
 Description : getting the max number of 1 between two zeros for binary
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define BIT 32

#include <stdio.h>
#include <stdlib.h>
#define BIT 32

int max_num_one(int num);

int main(void) {
	int num;
	fflush(stdin);fflush(stdout);
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	fflush(stdin);fflush(stdout);
	printf("Max number of ones between two zeros: %d\n", max_num_one(num));
	fflush(stdin);fflush(stdout);
	return 0;
}

int max_num_one(int num)
{
	int count = 0, maxcount = 0;
	for (int i = 0; i < BIT; i++)
	{
		if ((num & (1 << i)) != 0)
		{
				count++;
		}
		else
		{
			if (count > maxcount)
			{
				maxcount = count;
			}
			count = 0;
		}
    }
	return maxcount;
}
