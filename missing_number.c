#include <stdio.h>
#define SIZE 100

int missingnumber(int arr[], int N)
{
	int i, j, temp, least;

	for (i = 0; i < N - 1; i++)
	{
		least = i;
		for (j = i + 1; j < N; j++)
		{
			if (arr[j] < arr[least])
				least = j;
		}

		temp = arr[i];
		arr[i] = arr[least];
		arr[least] = temp;
	}

	for (i = 0; i < N; i++)
	{
		if ((arr[i] > 0) && (arr[i + 1] != arr[i] + 1))
			return arr[i] + 1;
	}

	if (arr[N - 1] == arr[N - 2] + 1)
		return arr[N - 1] + 1;

	else return 1;
}

int main() {
	int arr[SIZE] = { 0 };
	int N;
	int miss;
	int i;
	printf("How many input test case? ");
	scanf("%d", &N);
	printf("Input number : ");
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	miss = missingnumber(arr, N);
	printf("%d", miss);
	return 0;
}
