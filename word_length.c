#include <stdio.h>
#include <string.h>

int length[19] = { 0 };

void count(char* p)
{
	while (p != NULL) {
		for (int i = 1; i <= 19; i++)
		{
			if (strlen(p) == i)
				length[i - 1]++;
		}
		p = strtok(NULL, " .\n");
	}
}

int main()
{
	char text[3][80];
	char* p1, * p2, * p3;
	p1 = text[0];
	p2 = text[1];
	p3 = text[2];
	printf("Enter three lines of text: \n");
	gets_s(text[0]);
	gets_s(text[1]);
	gets_s(text[2]);
	printf("\n");

	p1 = strtok(text[0], " .\n");
	count(p1);

	p2 = strtok(text[1], " .\n");
	count(p2);

	p3 = strtok(text[2], " .\n");
	count(p3);

	for (int i = 1; i <= 19; i++)
	{
		if (length[i - 1])
			printf("%d words of length %d\n", length[i - 1], i);
	}
