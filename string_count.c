#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int occur[26] = { 0 };

void count(char* p)
{
	while (*p != NULL)
	{
		*p = tolower(*p);

		for (int i = 0; i < 26; i++)
		{
			if (*p == ('a' + i))
				occur[i]++;
		}
		p++;
	}
}

int main()
{
	char str[3][80];
	char *p1, *p2, *p3;

	p1 = str[0];
	p2 = str[1];
	p3 = str[2];

	printf("Enter three lines of text: \n");
	gets_s(str[0]);
	gets_s(str[1]);	
	gets_s(str[2]);

	count(p1);
	count(p2);
	count(p3);

	printf("\nThe total occurrences of each character: \n");
		for (int i = 0; i < 26; i++)
		{
			printf("%c:\t%d\n", 'a' + i, occur[i]);
		}
}
