#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double mat[1000][1000];
int nrow, ncol;

double sum_row(int row) {
	double sum = 0;
	int i;

	for (i = 0; i < ncol; i++)
	{
		sum += mat[row][i];
	}

	return sum;
}

int find_max_sum_row() {
	double cur_max = sum_row(0);
	int max_row = 0;
	int i = 0;

	for (; max_row < nrow; max_row++)
	{
		if (cur_max < sum_row(max_row))
		{
			cur_max = sum_row(max_row);
			i = max_row;
		}
	}

	return i;
}

int main()
{
	int i, j;
	nrow = 10;
	ncol = 10;
	srand((unsigned)time(NULL));
	for (i = 0; i < nrow; i++)
		for (j = 0; j < ncol; j++)
			mat[i][j] = rand() % 10;

	for (i = 0; i < nrow; i++) {
		for (j = 0; j < ncol; j++)
		{
			printf("%.f ", mat[i][j]);
		}
		printf("	%.f", sum_row(i));
		printf("\n");
	}

	printf("\n%d\n", find_max_sum_row());


}
