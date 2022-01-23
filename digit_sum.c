#include <stdio.h>
#include <stdlib.h>

int main()
{
	char integer[4][5];
	int total = 0;
	for (int i = 0; i < 4; i++)
	{
		printf("Enter an integer string: ");
		scanf("%s", integer[i]);
		total += atoi(integer[i]);
	}
	printf("\nThe total of the values is %d\n", total);
}
