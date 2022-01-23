#include <stdio.h>
#include <stdlib.h>

void matrices(int matrix[10][10]);
void print(int matrix[10][10]);
int main()
{
	int matrix1[10][10];
	int matrix2[10][10];
	int matrixSum[10][10];

	int i, j;
	
	printf("matrix1:\n");

	matrices(matrix1);
	print(matrix1);

	printf("\nmatrix2:\n");

	matrices(matrix2);
	print(matrix2);

	printf("\nresult:\n");


	for (i = 1; i < 6; i++)
	{
		for (j = 1; j < 7; j++)
		{
			matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

	print(matrixSum);

	return 0;
}

void matrices(int matrix[10][10])
{
	int i, j;

	for (i = 1; i < 6; i++)
	{
		for (j = 1; j < 7; j++)
		{
			matrix[i][j] = rand() % 100 + 1;
		}
	}
}

void print(int matrix[10][10])
{
	int i, j;
	for (i = 1; i < 6; i++)
	{
		for (j = 1; j < 7; j++)
		{
			printf("	%d", matrix[i][j]);
		}
		printf("\n");
	}
}
