#include <stdio.h>
#define NUM_ROW 100
#define NUM_COL 100

int is_summit(double h[NUM_ROW][NUM_COL], int pX, int pY)
{
	int summit = 1;
	int x = 0, y = 0;
	double point = h[pX][pY];
	
	if ((point > h[pX - 1][pY - 1]) && (point > h[pX][pY - 1]) && (point > h[pX + 1][pY - 1]) && (point > h[pX - 1][pY])
		&& (point > h[pX + 1][pY]) && (point > h[pX - 1][pY + 1]) && (point > h[pX][pY + 1]) && (point > h[pX + 1][pY + 1]))
		return summit;

	else return 0;
}

int count_summit(double h[NUM_ROW][NUM_COL], int nrow, int ncol)
{
	int num_summit = 0;
	int x = 0, y = 0;

	for(x = 1; x < nrow - 1; x++)
		for (y = 1; y < ncol - 1; y++)
		{
			if (is_summit(h, x, y)) {
				printf("%d %d\n", x, y);
				num_summit++;
			}
		}

	return num_summit;

}

void main()
{
	double h[NUM_ROW][NUM_COL] = { {1, 3, 2, 1, 1, 3},
	{3, 4, 3, 1, 4, 2},
	{1, 2, 3, 4, 2, 3},
	{2, 5, 3, 3, 4, 5},
	{2, 5, 3, 5, 4, 3},
	{1, 1, 3, 1, 3, 2} };
	int num_summit = count_summit(h, 6, 6);
	printf("%d summits exist.\n", num_summit);
}
