#include <stdio.h>
int flip(int n);
int is_palin(int n);
int flipadd(int n, int* count);
void main() {
	int num, result;
	int count = 0;
	scanf("%d", &num);
	result = flipadd(num, &count);
	printf("%d %d %d\n", num, count, result);
}

int flip(int n) {
	int flipn = 0;
	
	while (n > 0)
	{
		flipn = flipn * 10 + n % 10;
		n /= 10;
	}

	return flipn;
}

int is_palin(int n) {
	int temp = n;
	int flipn = 0;
	
	while (temp > 0)
	{
		flipn = flipn * 10 + temp % 10;
		temp /= 10;
	}

	if (n == flipn) return 1;
	else return 0;
}

int flipadd(int n, int* count) {
	int sum = n;
	while (*count <= 1000)
	{
		if (is_palin(sum) == 0) {
			sum += flip(sum);
			(*count)++;
		}

		else return sum;
	}

	if (*count > 1000)
		return -1;
}
