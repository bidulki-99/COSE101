#include <stdio.h>

int is_palin(int num) {
	int rev = 0;
	int temp = num;
	while (temp > 0) {
		rev = rev * 10 + temp % 10;
		temp /= 10;
	}
	return rev == num;
}

int main() {
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	if (is_palin(num))
		printf("%d is a palindrome\n", num);
	else
		printf("%d is NOT a palindrome\n", num);
}
