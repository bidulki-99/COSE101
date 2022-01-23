#include <stdio.h>

int main()
{
	int arr[] = { 6, 9, 5, 1, 3, 8, 2, 0, 7, 4 };
	int n = 10;
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
