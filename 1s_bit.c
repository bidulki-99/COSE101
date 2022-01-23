#include <stdio.h>

int main()
{
	unsigned int integer;
	printf("Enter an integer: ");
	scanf("%d", &integer);
	int ones = 0;

	unsigned int mask = 1 << 15;

	for (int i = 0; i < 16; i++)
	{
		if ((integer & mask) == 0) {
			printf("0");
		}

		else {
			printf("1");
			ones++;
		}

		mask = mask >> 1;

		if (i == 7) printf(" ");
	}

	printf("\n\n");

	if (ones % 2 == 1)
		printf("The total number of 1s in the bit representation is odd\n1s: %d\n", ones);

	else printf("The total number of 1s in the bit representation is even\n1s: %d\n", ones);
}
