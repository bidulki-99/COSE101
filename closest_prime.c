#include <stdio.h>

int is_prime(int num) {
	int j = 0;

	for (int i = 2; i < num; i++)
		if (num % 2 == 0) j++;

	if (j) return 0;
	else return 1;
}

int closest_prime(int n) {
	if (is_prime(n))
		return 0;
	else {
		int next_prime, prev_prime;

		for(int i = 2;; i++) {
			if (is_prime(i)) {
				if (i < n)
					prev_prime = i;

				else {
					next_prime = i;

					if (n - prev_prime > next_prime - n) return next_prime - n;
					else return n - prev_prime;
				}
			}
		}
	}
}

void main(void)
{
	int n = 37;
	int p;
	printf("Enter number: ");
	scanf("%d", &n);
	p = closest_prime(n);
	if (p == 0)
		printf("Would you believe it; %d is a prime!\n", n);
	else
		printf("%d is not prime; you missed it by that much (%d)!\n\n", n, p);
}
