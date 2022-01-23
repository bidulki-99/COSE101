#include <stdio.h>
#include <string.h>

int main()
{
	char string[10][50] = { 0 };
	char temp[50];

	for (int i = 0; i < 10; i++)
	{
		printf("Enter a string: ");
		scanf("%s", string[i]);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (strcmp(string[i], string[j]) > 0) {
				strcpy(temp, string[i]);
				strcpy(string[i], string[j]);
				strcpy(string[j], temp);
			}
		}
	}
	printf("\nThe strings in sorted order are: \n");
	for (int i = 0; i < 10; i++)
		printf("%s\n", string[i]);
}
