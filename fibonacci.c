#include <stdio.h>

int fib(int n)
{
	int a = 0, b = 1;
	int k;
	int tmp;
	for (k = 0; k < n - 1; k++) {
		tmp = a + b;
    a = b;
		b = tmp;
	}
	return b;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fib(n));
}
