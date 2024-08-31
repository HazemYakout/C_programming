#include <stdio.h>

int main(void) {
	int r, c, i, j;
	int A[100][100];
	int transpose[100][100];

	// Input rows and columns
	printf("Enter rows and columns of the matrix:\n");
	scanf("%d %d", &r, &c);

	// Input matrix elements
	printf("Enter elements of matrix:\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("a[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &A[i][j]);
		}
	}

	// Compute the transpose
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			transpose[j][i] = A[i][j];
		}
	}

	// Print the original matrix
	printf("Original matrix:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}

	// Print the transposed matrix
	printf("Transpose of matrix:\n");
	for (i = 0; i < c; i++)
	{

		for (j = 0; j < r; j++)
		{
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}

	return 0;
}
