#include <stdio.h>

unsigned int power2(unsigned int number, unsigned int pow)
{
	while (pow > 0) {
		number <<= 1;
		pow--;
	}

	return number;
}

void shift(unsigned int num)
{
	unsigned int mask = 1 << 15;
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 8; j++)
		{
			((num & mask) == 0) ? printf("0") : printf("1");
			mask = mask >> 1;
		}
		printf(" ");
	}
}

int main()
{
	unsigned int number, pow;
	printf("Enter two integers: ");
	scanf("%u %u", &number, &pow);

	printf("number: \n\t%u = ", number);
	shift(number);

	printf("\n\npow: \n\t%u = ", pow);
	shift(pow);

	unsigned int power;
	power = pow;

	unsigned int result;
	result = power2(number, pow);

	printf("\n\n%u * 2^%u = %u\n\t%u = ", number, power, result, result);
	shift(result);
	printf("\n");
}
