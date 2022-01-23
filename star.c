#include <stdio.h>

int main() {
	int i, j;
	for (i = 0; i < 10; i++) {
		if (i < 5) {
			for (j = 0; j < 4 - i; j++) printf("  ");
			for (j = 0; j <= i; j++) printf("*");
			printf("\n");
		}
		else {
			for (j = 9 - i; j > 0 && i <= 7; j--) printf("*");
			printf("\n");
		}
	}
	return 0;
}
