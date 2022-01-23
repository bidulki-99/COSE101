#include <stdio.h>
#include <math.h>

int main()
{
	unsigned int integer;
	printf("Enter unsigned an integer: ");
	scanf("%d", &integer);
	int reverse = 0;

	unsigned int mask = 1 << 15;

	printf("Before bits are reversed:\n\t%d = ", integer);
	for (int i = 0; i < 16; i++)
	{
		if ((integer & mask) == 0) {
			printf("0");
		}

		else {
			printf("1");
		}

		mask = mask >> 1;

		if (i == 7) printf(" ");
	}

	mask = pow(2, 15);

	reverse = pow(2, 16) - 1 - integer;

	printf("\n\nAfter bits are reversed:\n\t%d = ", reverse);
	for (int i = 0; i < 16; i++)
	{
		if ((integer & mask) == 0) {
			printf("1");
		}

		else {
			printf("0");
		}

		mask = mask >> 1;

		if (i == 7) printf(" ");
	}
}
