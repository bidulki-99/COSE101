#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);

int main()
{
	int (*func[3])(int, int) = { add, sub, mul };
	int oper = 0;
	while (oper != 3) {
		printf("0. Addition\n1. Subtraction\n2. Multiplication\n3. End\nselect the operation: ");
		scanf("%d", &oper);

		if (oper == 3) {
			printf("Exit\n");
			break;
		}

	int x, y, result;
	printf("Enter the two numbers: ");
	scanf("%d %d", &x, &y);
		
		switch (oper)
		{
		case 0: result = add(x, y); printf("\n\t%d + %d = %d", x, y, result); break;
		case 1: result = sub(x, y); printf("\n\t%d - %d = %d", x, y, result); break;
		case 2: result = mul(x, y); printf("\n\t%d * %d = %d", x, y, result); break;
		}
		printf("\n\n");
	}
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}
